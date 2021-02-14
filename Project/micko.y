%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "defs.h"
  #include "symtab.h"
  #include "codegen.h"

  int yyparse(void);
  int yylex(void);
  int yyerror(char *s);
  void warning(char *s);

  extern int yylineno;
  int out_lin = 0;
  char char_buffer[CHAR_BUFFER_LENGTH];
  int error_count = 0;
  int warning_count = 0;
  int var_num = 0;
  int fun_idx = -1;
  int fcall_idx = -1;
  int lab_num = -1;
  int cond_num = -1;
  int para_num = -1;
  int branch_num = -1;
  int br_ret = 0;
  int brparam = 0;
  int up_limit_idx = 0;
  int down_limit_idx = 0;
  bool post_inc = FALSE;
  int post_inc_idx = 0;
  FILE *output;
%}

%union {
  int i;
  char *s;
}

%token <i> _TYPE
%token _IF
%token _ELSE
%token _RETURN
%token <s> _ID
%token <s> _INT_NUMBER
%token <s> _UINT_NUMBER
%token _LPAREN
%token _RPAREN
%token _LBRACKET
%token _RBRACKET
%token _ASSIGN
%token _SEMICOLON
%token <i> _AROP
%token <i> _RELOP
%token <i> _QMARK
%token <i> _COLON
%token <i> _INC
%token <i> _COMMA
%token <i> _PARA
%token <i> _PASO
%token <i> _ABAJO
%token <i> _BRANCH
%token <i> _FIRST
%token <i> _SECOND
%token <i> _THIRD
%token <i> _OTHERWISE
%token <i> _ENDBRANCH
%token _STRELICA
%token _LZAGRADA
%token _RZAGRADA

%type <i> num_exp exp literal function_call argument rel_exp if_part para_body
%type <i> variable
%type <i> conditional_exp

%nonassoc ONLY_IF
%nonassoc _ELSE

%%

program
  : globalne_lista function_list
      {  
        if(lookup_symbol("main", FUN) == NO_INDEX)
          err("undefined reference to 'main'");
       }
  ;

globalne_lista
  : /* empty */
  | globalne_lista globalna
  ;

globalna
  : _TYPE _ID _SEMICOLON
     {
	int idx = lookup_symbol($2, GVAR);
	if(idx != NO_INDEX) {
		err("redefinition of '%s'", $2);
	} else {
		insert_symbol($2, GVAR, $1, NO_ATR, NO_ATR);
		code("\n%s:\n\t\tWORD\t1",$2);
	}
     }

function_list
  : function
  | function_list function
  ;

function
  : _TYPE _ID
      {
        fun_idx = lookup_symbol($2, FUN);
        if(fun_idx == NO_INDEX)
          fun_idx = insert_symbol($2, FUN, $1, NO_ATR, NO_ATR);
        else 
          err("redefinition of function '%s'", $2);

	code("\n%s:", $2);
        code("\n\t\tPUSH\t%%14");
	code("\n\t\tMOV \t%%15,%%14");
      }
    _LPAREN parameter _RPAREN body 
      {
	clear_symbols(fun_idx+1);
	var_num = 0;

	code("\n@%s_exit:", $2);
        code("\n\t\tMOV \t%%14,%%15");
        code("\n\t\tPOP \t%%14");
	code("\n\t\tRET");
      }
     
  ;

parameter
  : /* empty */
    { set_atr1(fun_idx, 0); }
  | _TYPE _ID
      {
	if($1==VOID)
	  err("Parametar ne moze biti tipa VOID");
        insert_symbol($2, PAR, $1, 1, NO_ATR);
        set_atr1(fun_idx, 1);
        set_atr2(fun_idx, $1);
      }
  ;

body
  : _LBRACKET variable_list 
	{
        if(var_num)
          code("\n\t\tSUBS\t%%15,$%d,%%15", 4*var_num);
          code("\n@%s_body:", get_name(fun_idx));
	}
   statement_list _RBRACKET
  ;

variable_list
  : /* empty */
  | variable_list variable _SEMICOLON
  ;

variable
  : _TYPE _ID
      {
	if($1 == VOID) 
	   err("Promenljiva ne moze biti tipa VOID");
        if(lookup_symbol($2, VAR|PAR|GVAR) == NO_INDEX)
           insert_symbol($2, VAR, $1, ++var_num, NO_ATR);
        else 
           err("redefinition of '%s'", $2);
      }
  | variable _COMMA _ID
     {
	if($1 == VOID) 
	   err("Promenljiva ne moze biti tipa VOID");
        if(lookup_symbol($3, VAR|PAR) == NO_INDEX)
           insert_symbol($3, VAR, $1, ++var_num, NO_ATR);
        else 
           err("redefinition of '%s'", $3);
     }
  ;

statement_list
  : /* empty */
  | statement_list statement 
  ;

statement
  : compound_statement
  | assignment_statement
  | if_statement
  | return_statement
  | inc_statement
  | para_statement
  | branch_iskaz
  ;

para_statement
  : _PARA _LPAREN para_body _RPAREN statement
	{
	code("\n\t\tSUBS\t");
	gen_sym_name(up_limit_idx);
	code(",$%d,", $3);
	gen_sym_name(up_limit_idx);
	code("\n\t\tJMP\tpara_pocetak_%d\t", para_num);
	code("\npara_kraj_%d:\t", para_num);
	}
  ;

para_body
  : _ID _ASSIGN literal _ABAJO literal _PASO literal
	{
	$<i>$ = ++para_num;
        int idx = lookup_symbol($1, VAR|PAR|GVAR);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", $1);
        else
          if(get_type(idx) != get_type($3))
            err("Literal1 i id nisu istog tipa");
	else
	  if(get_type(idx) != get_type($5))
	    err("Literal2 i id nisu istog tipa");
	else
	  if(get_type(idx) != get_type($7))
	    err("Literal3 i id nisu istog tipa");
	else 
	  if(atoi(get_name($3)) < atoi(get_name($5)))
	    err("Literal1 %d mora biti veci od literala2 %d", atoi(get_name($3)), atoi(get_name($5)));
	
	up_limit_idx = lookup_symbol($1, VAR|PAR|GVAR);
	down_limit_idx = take_reg();
	gen_mov($3, up_limit_idx);
	gen_mov($5, down_limit_idx);
	code("\npara_pocetak_%d:\t", para_num);
	code("\n\t\tCMPS\t");
	gen_sym_name(up_limit_idx);
        code(",");
        gen_sym_name(down_limit_idx);
	code("\n\t\tJLES\tpara_kraj_%d\t", para_num);
	$$ = atoi(get_name($7));
        }
  | _ID _ASSIGN literal _ABAJO literal
	{
        int idx = lookup_symbol($1, VAR|PAR|GVAR);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", $1);
        else
          if(get_type(idx) != get_type($3))
            err("Literal1 i id nisu istog tipa");
	else
	  if(get_type(idx) != get_type($5))
	    err("Literal2 i id nisu istog tipa");
	else
	  if(atoi(get_name($3)) < atoi(get_name($5)))
	    err("Literal1 %d mora biti veci od literala2 %d", atoi(get_name($3)), atoi(get_name($5)));

	up_limit_idx = lookup_symbol($1, VAR|PAR|GVAR);
	down_limit_idx = take_reg();
	gen_mov($3, up_limit_idx);
	gen_mov($5, down_limit_idx);
	code("\npara_pocetak_%d:\t", para_num);
	code("\n\t\tCMPS\t");
	gen_sym_name(up_limit_idx);
        code(",");
        gen_sym_name(down_limit_idx);
	code("\n\t\tJLES\tpara_kraj_%d\t", para_num);
	$$ = 1;
        }
  ;

branch_iskaz
  : _BRANCH _LZAGRADA _ID _STRELICA literal _STRELICA literal _STRELICA literal  _RZAGRADA
	{
	int idx = lookup_symbol($3, VAR|GVAR);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", $3);
	else
          if(get_type(idx) != get_type($5))
            err("Var i konst1 nisu istog tipa");
	else
	  if(get_type(idx) != get_type($7))
	    err("Var i konst2 nisu istog tipa");
	else
	  if(get_type(idx) != get_type($9))
	    err("Var i konst3 nisu istog tipa");

	$<i>$ = ++branch_num;
	code("\nbranch_pocetak_%d:\t", branch_num);
	
	gen_cmp(idx, $5);
	code("\n\t\tJEQ\tbranch_first_%d\t", branch_num);
	
	gen_cmp(idx, $7);
	code("\n\t\tJEQ\tbranch_second_%d\t", branch_num);

	gen_cmp(idx, $9);
	code("\n\t\tJEQ\tbranch_third_%d\t", branch_num);
	code("\n\t\tJMP\tbranch_otherwise_%d\t", branch_num);
	}
 _FIRST
	{
	code("\nbranch_first_%d:\t", branch_num);
	}
 statement
	{
	code("\n\t\tJMP\tbranch_kraj_%d\t", branch_num);
	}
 _SECOND
	{
	code("\nbranch_second_%d:\t", branch_num);
	} 
statement 
	{
	code("\n\t\tJMP\tbranch_kraj_%d\t", branch_num);
	}
 _THIRD 
	{
	code("\nbranch_third_%d:\t", branch_num);
	} 
statement
	{
	code("\n\t\tJMP\tbranch_kraj_%d\t", branch_num);
	}
 _OTHERWISE
	{
	code("\nbranch_otherwise_%d:\t", branch_num);
	}  
statement
	{
	code("\n\t\tJMP\tbranch_kraj_%d\t", branch_num);
	}
 _ENDBRANCH
	{
	int idx = lookup_symbol($3, VAR|GVAR);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", $3);
	else
          if(get_type(idx) != get_type($5))
            err("Var i konst1 nisu istog tipa");
	else
	  if(get_type(idx) != get_type($7))
	    err("Var i konst2 nisu istog tipa");
	else
	  if(get_type(idx) != get_type($9))
	    err("Var i konst3 nisu istog tipa");

	code("\nbranch_kraj_%d:\t", branch_num);
	}
  ;

compound_statement
  : _LBRACKET statement_list _RBRACKET
  ;

assignment_statement
  : _ID _ASSIGN num_exp _SEMICOLON
      {
        int idx = lookup_symbol($1, VAR|PAR|GVAR);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", $1);
        else
          if(get_type(idx) != get_type($3))
            err("incompatible types in assignment idx %d num_exp %d sym1 %s sym2 %d", get_type(idx), get_type($3), $1, $3);
	gen_mov($3, idx);
	if (post_inc == TRUE) {
	  code("\n\t\tADDS\t");
	  gen_sym_name(post_inc_idx);
	  code(",$1,");
	  gen_sym_name(post_inc_idx);
	  post_inc = FALSE;
	}
      }
  ;

num_exp
  : exp
  | num_exp _AROP exp
      {
        if(get_type($1) != get_type($3))
          err("invalid operands: arithmetic operation");
          int t1 = get_type($1);   
        code("\n\t\t%s\t", ar_instructions[$2 + (t1 - 1) * AROP_NUMBER]);
        gen_sym_name($1);
        code(",");
        gen_sym_name($3);
        code(",");
	free_if_reg($3);
        free_if_reg($1);
        $$ = take_reg();
        gen_sym_name($$);
	set_type($$, t1);
      }
  ;

exp
  : literal
  | _ID
      {
        $$ = lookup_symbol($1, VAR|PAR|GVAR);
        if($$ == NO_INDEX)
          err("'%s' undeclared", $1);
      }
  | _ID _INC
      {
        $$ = lookup_symbol($1, VAR|PAR|GVAR);
        if($$ == NO_INDEX)
          err("'%s' undeclared", $1);
	int fun_idx = lookup_symbol($1, FUN);
	if(fun_idx != NO_INDEX)
          err("Primena postinkrementa na funkciju");
	post_inc = TRUE;
	post_inc_idx = $$;
      }
  | function_call
	{
        $$ = take_reg();
        gen_mov(FUN_REG, $$);
	}
  | _LPAREN num_exp _RPAREN
      { $$ = $2; }
  | _LPAREN rel_exp _RPAREN _QMARK conditional_exp _COLON conditional_exp
      {
	$<i>$ = ++cond_num;
	if(get_type($5) != get_type($7))
	  err("Nije isti tip.");
	$$ = take_reg();
	code("\n\t\tJEQ\tistina%d\t", cond_num);
	gen_mov($7, $$);
	code("\n\t\tJMP\tlaz%d\t", cond_num);
	code("\nistina%d:\n\t\tMOV\t", cond_num);
	gen_sym_name($5);
	code(",");
	gen_sym_name($$);
	code("\nlaz%d:\t\n", cond_num);
	set_type($$, get_type($5));
      }
  ;

inc_statement
  : _ID _INC _SEMICOLON
      {
	int idx = lookup_symbol($1, VAR|PAR|GVAR);
	if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", $1);

	int fun_idx = lookup_symbol($1, FUN);
	if(fun_idx != NO_INDEX)
          err("Primena postinkrementa na funkciju");

	  code("\n\t\tADDS\t");
	  gen_sym_name(idx);
	  code(",$1,");
	  gen_sym_name(idx);
      }
  ;

conditional_exp
  : _ID
      {
	$$ = lookup_symbol($1, VAR|PAR);
        if($$ == NO_INDEX)
          err("'%s' undeclared", $1);
      }
  | literal
  ;

literal
  : _INT_NUMBER
      { $$ = insert_literal($1, INT); }

  | _UINT_NUMBER
      { $$ = insert_literal($1, UINT); }
  ;

function_call
  : _ID 
      {
        fcall_idx = lookup_symbol($1, FUN);
        if(fcall_idx == NO_INDEX)
          err("'%s' is not a function", $1);
      }
    _LPAREN argument _RPAREN
      {
        if(get_atr1(fcall_idx) != $4)
          err("wrong number of args to function '%s'", 
              get_name(fcall_idx));
	code("\n\t\t\tCALL\t%s", get_name(fcall_idx));
        if($4 > 0)
        code("\n\t\t\tADDS\t%%15,$%d,%%15", $4 * 4);
        set_type(FUN_REG, get_type(fcall_idx));
        $$ = FUN_REG;
      }
  ;

argument
  : /* empty */
    { $$ = 0; }

  | num_exp
    { 
      if(get_atr2(fcall_idx) != get_type($1))
        err("incompatible type for argument in '%s'",
            get_name(fcall_idx));
	free_if_reg($1);
        code("\n\t\t\tPUSH\t");
        gen_sym_name($1);
      $$ = 1;
    }
  ;

if_statement
  : if_part %prec ONLY_IF
	{ code("\n@exit%d:", $1); }
  | if_part _ELSE statement
	{ code("\n@exit%d:", $1); }
  ;

if_part
  : _IF _LPAREN 
	{
        $<i>$ = ++lab_num;
        code("\n@if%d:", lab_num);
	}
   rel_exp 
	{
        code("\n\t\t%s\t@false%d", opp_jumps[$4], $<i>3); 
        code("\n@true%d:", $<i>3);
	}
   _RPAREN statement
	{
        code("\n\t\tJMP \t@exit%d", $<i>3);
        code("\n@false%d:", $<i>3);
        $$ = $<i>3;
	}
  ;

rel_exp
  : num_exp _RELOP num_exp
      {
        if(get_type($1) != get_type($3))
          err("invalid operands: relational operator");
	$$ = $2 + ((get_type($1) - 1) * RELOP_NUMBER);
	gen_cmp($1, $3);
      }
  ;

return_statement
  : _RETURN num_exp _SEMICOLON
      {

        if(get_type(fun_idx) == VOID )
		err("Ne moze VOID fja da vrati vrednost !");				

        if(get_type(fun_idx) != get_type($2))
        	err("incompatible types in return");

	br_ret++;

	gen_mov($2, FUN_REG);
	code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));
      }

    | _RETURN _SEMICOLON
	{
        if(get_type(fun_idx) != VOID )
	warn("Fja nije VOID tipa i ocekuje se da vrati neku vrednost.");

	br_ret++;
	}
  ;

%%

int yyerror(char *s) {
  fprintf(stderr, "\nline %d: ERROR: %s", yylineno, s);
  error_count++;
  return 0;
}

void warning(char *s) {
  fprintf(stderr, "\nline %d: WARNING: %s", yylineno, s);
  warning_count++;
}

int main() {
  int synerr;
  init_symtab();
  output = fopen("output.asm", "w+");

  synerr = yyparse();

  clear_symtab();
  fclose(output);
  
  if(warning_count)
    printf("\n%d warning(s).\n", warning_count);

  if(error_count) {
    remove("output.asm");
    printf("\n%d error(s).\n", error_count);
  }

  if(synerr)
    return -1;  //syntax error
  else if(error_count)
    return error_count & 127; //semantic errors
  else if(warning_count)
    return (warning_count & 127) + 127; //warnings
  else
    return 0; //OK
}


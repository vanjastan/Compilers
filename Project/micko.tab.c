/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "micko.y" /* yacc.c:339  */

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

#line 99 "micko.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "micko.tab.h".  */
#ifndef YY_YY_MICKO_TAB_H_INCLUDED
# define YY_YY_MICKO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _TYPE = 258,
    _IF = 259,
    _ELSE = 260,
    _RETURN = 261,
    _ID = 262,
    _INT_NUMBER = 263,
    _UINT_NUMBER = 264,
    _LPAREN = 265,
    _RPAREN = 266,
    _LBRACKET = 267,
    _RBRACKET = 268,
    _ASSIGN = 269,
    _SEMICOLON = 270,
    _AROP = 271,
    _RELOP = 272,
    _QMARK = 273,
    _COLON = 274,
    _INC = 275,
    _COMMA = 276,
    _PARA = 277,
    _PASO = 278,
    _ABAJO = 279,
    _BRANCH = 280,
    _FIRST = 281,
    _SECOND = 282,
    _THIRD = 283,
    _OTHERWISE = 284,
    _ENDBRANCH = 285,
    _STRELICA = 286,
    _LZAGRADA = 287,
    _RZAGRADA = 288,
    ONLY_IF = 289
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 34 "micko.y" /* yacc.c:355  */

  int i;
  char *s;

#line 179 "micko.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MICKO_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 196 "micko.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   128

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  130

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    81,    81,    88,    90,    94,   106,   107,   112,   111,
     138,   139,   151,   150,   159,   161,   165,   174,   185,   187,
     191,   192,   193,   194,   195,   196,   197,   201,   213,   244,
     275,   303,   307,   311,   315,   319,   323,   327,   331,   274,
     354,   358,   378,   379,   398,   399,   405,   416,   421,   423,
     442,   460,   466,   470,   473,   479,   478,   499,   501,   514,
     516,   522,   527,   521,   540,   550,   565
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_TYPE", "_IF", "_ELSE", "_RETURN",
  "_ID", "_INT_NUMBER", "_UINT_NUMBER", "_LPAREN", "_RPAREN", "_LBRACKET",
  "_RBRACKET", "_ASSIGN", "_SEMICOLON", "_AROP", "_RELOP", "_QMARK",
  "_COLON", "_INC", "_COMMA", "_PARA", "_PASO", "_ABAJO", "_BRANCH",
  "_FIRST", "_SECOND", "_THIRD", "_OTHERWISE", "_ENDBRANCH", "_STRELICA",
  "_LZAGRADA", "_RZAGRADA", "ONLY_IF", "$accept", "program",
  "globalne_lista", "globalna", "function_list", "function", "$@1",
  "parameter", "body", "$@2", "variable_list", "variable",
  "statement_list", "statement", "para_statement", "para_body",
  "branch_iskaz", "@3", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10",
  "$@11", "compound_statement", "assignment_statement", "num_exp", "exp",
  "inc_statement", "conditional_exp", "literal", "function_call", "$@12",
  "argument", "if_statement", "if_part", "@13", "$@14", "rel_exp",
  "return_statement", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289
};
# endif

#define YYPACT_NINF -83

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-83)))

#define YYTABLE_NINF -56

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -83,     3,     5,   -83,    21,   -83,    17,   -83,    15,    29,
     -83,   -83,    28,   -83,    51,    49,    68,   -83,    70,   -83,
     -83,    57,    73,   -83,    -9,   -83,    10,   -83,    74,    75,
      59,    13,   -83,   -83,    76,    52,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,    78,   -83,   -83,   -83,    -5,   -83,   -83,
      63,   -83,    48,   -83,   -83,   -83,    63,    72,    33,    81,
      82,    37,    63,   -83,    80,    31,    83,   -83,    63,    60,
     -83,   -83,    77,    84,    61,   -83,    -6,   -83,    63,   -83,
      63,    79,   -83,   -83,    69,    37,    69,    85,    86,    87,
      86,    43,    88,   -83,    62,    37,   -83,   -83,    89,   -83,
      69,    69,   -83,    43,    90,    91,   -83,    69,    69,   -83,
      66,   -83,    92,   -83,    37,   -83,    93,   -83,    37,   -83,
      95,   -83,    37,   -83,    71,   -83,    37,   -83,    94,   -83
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,     0,     4,     2,     6,     8,     0,
       7,     5,     0,     8,    10,     0,     0,    11,     0,    14,
       9,    12,     0,    18,     0,    16,     0,    15,     0,     0,
       0,     0,    18,    13,     0,     0,    19,    25,    26,    20,
      21,    24,    22,    59,    23,    17,    61,    45,    53,    54,
       0,    66,     0,    42,    44,    47,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,     0,    65,     0,     0,
      50,    40,     0,     0,     0,    60,     0,    62,    57,    48,
       0,     0,    43,    41,     0,     0,     0,     0,    58,     0,
      64,     0,     0,    27,     0,     0,    56,    51,     0,    52,
       0,     0,    63,     0,    29,     0,    49,     0,     0,    28,
       0,    30,     0,    31,     0,    32,     0,    33,     0,    34,
       0,    35,     0,    36,     0,    37,     0,    38,     0,    39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -83,   -83,   -83,   -83,   -83,    97,   -83,   -83,   -83,   -83,
     -83,   -83,    96,   -61,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -49,    36,
     -83,    -2,   -82,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
      44,   -83
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,     6,     7,    12,    16,    20,    23,
      21,    24,    26,    36,    37,    73,    38,   112,   114,   116,
     118,   120,   122,   124,   126,   128,    39,    40,    52,    53,
      41,    98,    54,    55,    64,    89,    42,    43,    62,    87,
      66,    44
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      75,    65,    92,     3,    94,   -55,    27,    69,     4,    99,
      68,    80,    28,    76,    29,    63,    30,    31,   104,   105,
       9,    99,    32,    33,    93,   109,   110,    56,     8,    88,
      11,    90,    34,    57,   102,    35,    13,    29,    14,    30,
      31,    29,    79,    30,    31,    32,    71,    68,    80,    32,
      97,    48,    49,   115,    15,    34,    17,   119,    35,    34,
      22,   123,    35,    67,    68,   127,    47,    48,    49,    50,
      47,    48,    49,    50,    51,    83,    68,    48,    49,    18,
      25,    45,    19,    61,    60,    46,    59,    70,    72,    74,
      78,    84,    86,   101,    81,    85,    95,    91,    96,   111,
     125,   106,    68,    10,    82,     0,    77,     0,   103,     0,
       0,     0,   100,   107,     0,     0,     0,     0,   113,     0,
     117,     0,   108,   121,   129,     0,     0,     0,    58
};

static const yytype_int8 yycheck[] =
{
      61,    50,    84,     0,    86,    10,    15,    56,     3,    91,
      16,    17,    21,    62,     4,    20,     6,     7,   100,   101,
       3,   103,    12,    13,    85,   107,   108,    14,     7,    78,
      15,    80,    22,    20,    95,    25,     7,     4,    10,     6,
       7,     4,    11,     6,     7,    12,    13,    16,    17,    12,
       7,     8,     9,   114,     3,    22,     7,   118,    25,    22,
       3,   122,    25,    15,    16,   126,     7,     8,     9,    10,
       7,     8,     9,    10,    15,    15,    16,     8,     9,    11,
       7,     7,    12,     5,    32,    10,    10,    15,     7,     7,
      10,    14,    31,    31,    11,    11,    11,    18,    11,    33,
      29,   103,    16,     6,    68,    -1,    62,    -1,    19,    -1,
      -1,    -1,    24,    23,    -1,    -1,    -1,    -1,    26,    -1,
      27,    -1,    31,    28,    30,    -1,    -1,    -1,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,    37,     0,     3,    38,    39,    40,     7,     3,
      40,    15,    41,     7,    10,     3,    42,     7,    11,    12,
      43,    45,     3,    44,    46,     7,    47,    15,    21,     4,
       6,     7,    12,    13,    22,    25,    48,    49,    51,    61,
      62,    65,    71,    72,    76,     7,    10,     7,     8,     9,
      10,    15,    63,    64,    67,    68,    14,    20,    47,    10,
      32,     5,    73,    20,    69,    63,    75,    15,    16,    63,
      15,    13,     7,    50,     7,    48,    63,    75,    10,    11,
      17,    11,    64,    15,    14,    11,    31,    74,    63,    70,
      63,    18,    67,    48,    67,    11,    11,     7,    66,    67,
      24,    31,    48,    19,    67,    67,    66,    23,    31,    67,
      67,    33,    52,    26,    53,    48,    54,    27,    55,    48,
      56,    28,    57,    48,    58,    29,    59,    48,    60,    30
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    39,    39,    41,    40,
      42,    42,    44,    43,    45,    45,    46,    46,    47,    47,
      48,    48,    48,    48,    48,    48,    48,    49,    50,    50,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    51,
      61,    62,    63,    63,    64,    64,    64,    64,    64,    64,
      65,    66,    66,    67,    67,    69,    68,    70,    70,    71,
      71,    73,    74,    72,    75,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     3,     1,     2,     0,     7,
       0,     2,     0,     5,     0,     3,     2,     3,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     5,     7,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       3,     4,     1,     3,     1,     1,     2,     1,     3,     7,
       3,     1,     1,     1,     1,     0,     5,     0,     1,     1,
       3,     0,     0,     7,     3,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 82 "micko.y" /* yacc.c:1646  */
    {  
        if(lookup_symbol("main", FUN) == NO_INDEX)
          err("undefined reference to 'main'");
       }
#line 1368 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 95 "micko.y" /* yacc.c:1646  */
    {
	int idx = lookup_symbol((yyvsp[-1].s), GVAR);
	if(idx != NO_INDEX) {
		err("redefinition of '%s'", (yyvsp[-1].s));
	} else {
		insert_symbol((yyvsp[-1].s), GVAR, (yyvsp[-2].i), NO_ATR, NO_ATR);
		code("\n%s:\n\t\tWORD\t1",(yyvsp[-1].s));
	}
     }
#line 1382 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 112 "micko.y" /* yacc.c:1646  */
    {
        fun_idx = lookup_symbol((yyvsp[0].s), FUN);
        if(fun_idx == NO_INDEX)
          fun_idx = insert_symbol((yyvsp[0].s), FUN, (yyvsp[-1].i), NO_ATR, NO_ATR);
        else 
          err("redefinition of function '%s'", (yyvsp[0].s));

	code("\n%s:", (yyvsp[0].s));
        code("\n\t\tPUSH\t%%14");
	code("\n\t\tMOV \t%%15,%%14");
      }
#line 1398 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 124 "micko.y" /* yacc.c:1646  */
    {
	clear_symbols(fun_idx+1);
	var_num = 0;

	code("\n@%s_exit:", (yyvsp[-5].s));
        code("\n\t\tMOV \t%%14,%%15");
        code("\n\t\tPOP \t%%14");
	code("\n\t\tRET");
      }
#line 1412 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 138 "micko.y" /* yacc.c:1646  */
    { set_atr1(fun_idx, 0); }
#line 1418 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 140 "micko.y" /* yacc.c:1646  */
    {
	if((yyvsp[-1].i)==VOID)
	  err("Parametar ne moze biti tipa VOID");
        insert_symbol((yyvsp[0].s), PAR, (yyvsp[-1].i), 1, NO_ATR);
        set_atr1(fun_idx, 1);
        set_atr2(fun_idx, (yyvsp[-1].i));
      }
#line 1430 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 151 "micko.y" /* yacc.c:1646  */
    {
        if(var_num)
          code("\n\t\tSUBS\t%%15,$%d,%%15", 4*var_num);
          code("\n@%s_body:", get_name(fun_idx));
	}
#line 1440 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 166 "micko.y" /* yacc.c:1646  */
    {
	if((yyvsp[-1].i) == VOID) 
	   err("Promenljiva ne moze biti tipa VOID");
        if(lookup_symbol((yyvsp[0].s), VAR|PAR|GVAR) == NO_INDEX)
           insert_symbol((yyvsp[0].s), VAR, (yyvsp[-1].i), ++var_num, NO_ATR);
        else 
           err("redefinition of '%s'", (yyvsp[0].s));
      }
#line 1453 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 175 "micko.y" /* yacc.c:1646  */
    {
	if((yyvsp[-2].i) == VOID) 
	   err("Promenljiva ne moze biti tipa VOID");
        if(lookup_symbol((yyvsp[0].s), VAR|PAR) == NO_INDEX)
           insert_symbol((yyvsp[0].s), VAR, (yyvsp[-2].i), ++var_num, NO_ATR);
        else 
           err("redefinition of '%s'", (yyvsp[0].s));
     }
#line 1466 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 202 "micko.y" /* yacc.c:1646  */
    {
	code("\n\t\tSUBS\t");
	gen_sym_name(up_limit_idx);
	code(",$%d,", (yyvsp[-2].i));
	gen_sym_name(up_limit_idx);
	code("\n\t\tJMP\tpara_pocetak_%d\t", para_num);
	code("\npara_kraj_%d:\t", para_num);
	}
#line 1479 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 214 "micko.y" /* yacc.c:1646  */
    {
	(yyval.i) = ++para_num;
        int idx = lookup_symbol((yyvsp[-6].s), VAR|PAR|GVAR);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", (yyvsp[-6].s));
        else
          if(get_type(idx) != get_type((yyvsp[-4].i)))
            err("Literal1 i id nisu istog tipa");
	else
	  if(get_type(idx) != get_type((yyvsp[-2].i)))
	    err("Literal2 i id nisu istog tipa");
	else
	  if(get_type(idx) != get_type((yyvsp[0].i)))
	    err("Literal3 i id nisu istog tipa");
	else 
	  if(atoi(get_name((yyvsp[-4].i))) < atoi(get_name((yyvsp[-2].i))))
	    err("Literal1 %d mora biti veci od literala2 %d", atoi(get_name((yyvsp[-4].i))), atoi(get_name((yyvsp[-2].i))));
	
	up_limit_idx = lookup_symbol((yyvsp[-6].s), VAR|PAR|GVAR);
	down_limit_idx = take_reg();
	gen_mov((yyvsp[-4].i), up_limit_idx);
	gen_mov((yyvsp[-2].i), down_limit_idx);
	code("\npara_pocetak_%d:\t", para_num);
	code("\n\t\tCMPS\t");
	gen_sym_name(up_limit_idx);
        code(",");
        gen_sym_name(down_limit_idx);
	code("\n\t\tJLES\tpara_kraj_%d\t", para_num);
	(yyval.i) = atoi(get_name((yyvsp[0].i)));
        }
#line 1514 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 245 "micko.y" /* yacc.c:1646  */
    {
        int idx = lookup_symbol((yyvsp[-4].s), VAR|PAR|GVAR);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", (yyvsp[-4].s));
        else
          if(get_type(idx) != get_type((yyvsp[-2].i)))
            err("Literal1 i id nisu istog tipa");
	else
	  if(get_type(idx) != get_type((yyvsp[0].i)))
	    err("Literal2 i id nisu istog tipa");
	else
	  if(atoi(get_name((yyvsp[-2].i))) < atoi(get_name((yyvsp[0].i))))
	    err("Literal1 %d mora biti veci od literala2 %d", atoi(get_name((yyvsp[-2].i))), atoi(get_name((yyvsp[0].i))));

	up_limit_idx = lookup_symbol((yyvsp[-4].s), VAR|PAR|GVAR);
	down_limit_idx = take_reg();
	gen_mov((yyvsp[-2].i), up_limit_idx);
	gen_mov((yyvsp[0].i), down_limit_idx);
	code("\npara_pocetak_%d:\t", para_num);
	code("\n\t\tCMPS\t");
	gen_sym_name(up_limit_idx);
        code(",");
        gen_sym_name(down_limit_idx);
	code("\n\t\tJLES\tpara_kraj_%d\t", para_num);
	(yyval.i) = 1;
        }
#line 1545 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 275 "micko.y" /* yacc.c:1646  */
    {
	int idx = lookup_symbol((yyvsp[-7].s), VAR|GVAR);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", (yyvsp[-7].s));
	else
          if(get_type(idx) != get_type((yyvsp[-5].i)))
            err("Var i konst1 nisu istog tipa");
	else
	  if(get_type(idx) != get_type((yyvsp[-3].i)))
	    err("Var i konst2 nisu istog tipa");
	else
	  if(get_type(idx) != get_type((yyvsp[-1].i)))
	    err("Var i konst3 nisu istog tipa");

	(yyval.i) = ++branch_num;
	code("\nbranch_pocetak_%d:\t", branch_num);
	
	gen_cmp(idx, (yyvsp[-5].i));
	code("\n\t\tJEQ\tbranch_first_%d\t", branch_num);
	
	gen_cmp(idx, (yyvsp[-3].i));
	code("\n\t\tJEQ\tbranch_second_%d\t", branch_num);

	gen_cmp(idx, (yyvsp[-1].i));
	code("\n\t\tJEQ\tbranch_third_%d\t", branch_num);
	code("\n\t\tJMP\tbranch_otherwise_%d\t", branch_num);
	}
#line 1577 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 303 "micko.y" /* yacc.c:1646  */
    {
	code("\nbranch_first_%d:\t", branch_num);
	}
#line 1585 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 307 "micko.y" /* yacc.c:1646  */
    {
	code("\n\t\tJMP\tbranch_kraj_%d\t", branch_num);
	}
#line 1593 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 311 "micko.y" /* yacc.c:1646  */
    {
	code("\nbranch_second_%d:\t", branch_num);
	}
#line 1601 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 315 "micko.y" /* yacc.c:1646  */
    {
	code("\n\t\tJMP\tbranch_kraj_%d\t", branch_num);
	}
#line 1609 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 319 "micko.y" /* yacc.c:1646  */
    {
	code("\nbranch_third_%d:\t", branch_num);
	}
#line 1617 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 323 "micko.y" /* yacc.c:1646  */
    {
	code("\n\t\tJMP\tbranch_kraj_%d\t", branch_num);
	}
#line 1625 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 327 "micko.y" /* yacc.c:1646  */
    {
	code("\nbranch_otherwise_%d:\t", branch_num);
	}
#line 1633 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 331 "micko.y" /* yacc.c:1646  */
    {
	code("\n\t\tJMP\tbranch_kraj_%d\t", branch_num);
	}
#line 1641 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 335 "micko.y" /* yacc.c:1646  */
    {
	int idx = lookup_symbol((yyvsp[-25].s), VAR|GVAR);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", (yyvsp[-25].s));
	else
          if(get_type(idx) != get_type((yyvsp[-23].i)))
            err("Var i konst1 nisu istog tipa");
	else
	  if(get_type(idx) != get_type((yyvsp[-21].i)))
	    err("Var i konst2 nisu istog tipa");
	else
	  if(get_type(idx) != get_type((yyvsp[-19].i)))
	    err("Var i konst3 nisu istog tipa");

	code("\nbranch_kraj_%d:\t", branch_num);
	}
#line 1662 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 359 "micko.y" /* yacc.c:1646  */
    {
        int idx = lookup_symbol((yyvsp[-3].s), VAR|PAR|GVAR);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", (yyvsp[-3].s));
        else
          if(get_type(idx) != get_type((yyvsp[-1].i)))
            err("incompatible types in assignment idx %d num_exp %d sym1 %s sym2 %d", get_type(idx), get_type((yyvsp[-1].i)), (yyvsp[-3].s), (yyvsp[-1].i));
	gen_mov((yyvsp[-1].i), idx);
	if (post_inc == TRUE) {
	  code("\n\t\tADDS\t");
	  gen_sym_name(post_inc_idx);
	  code(",$1,");
	  gen_sym_name(post_inc_idx);
	  post_inc = FALSE;
	}
      }
#line 1683 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 380 "micko.y" /* yacc.c:1646  */
    {
        if(get_type((yyvsp[-2].i)) != get_type((yyvsp[0].i)))
          err("invalid operands: arithmetic operation");
          int t1 = get_type((yyvsp[-2].i));   
        code("\n\t\t%s\t", ar_instructions[(yyvsp[-1].i) + (t1 - 1) * AROP_NUMBER]);
        gen_sym_name((yyvsp[-2].i));
        code(",");
        gen_sym_name((yyvsp[0].i));
        code(",");
	free_if_reg((yyvsp[0].i));
        free_if_reg((yyvsp[-2].i));
        (yyval.i) = take_reg();
        gen_sym_name((yyval.i));
	set_type((yyval.i), t1);
      }
#line 1703 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 400 "micko.y" /* yacc.c:1646  */
    {
        (yyval.i) = lookup_symbol((yyvsp[0].s), VAR|PAR|GVAR);
        if((yyval.i) == NO_INDEX)
          err("'%s' undeclared", (yyvsp[0].s));
      }
#line 1713 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 406 "micko.y" /* yacc.c:1646  */
    {
        (yyval.i) = lookup_symbol((yyvsp[-1].s), VAR|PAR|GVAR);
        if((yyval.i) == NO_INDEX)
          err("'%s' undeclared", (yyvsp[-1].s));
	int fun_idx = lookup_symbol((yyvsp[-1].s), FUN);
	if(fun_idx != NO_INDEX)
          err("Primena postinkrementa na funkciju");
	post_inc = TRUE;
	post_inc_idx = (yyval.i);
      }
#line 1728 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 417 "micko.y" /* yacc.c:1646  */
    {
        (yyval.i) = take_reg();
        gen_mov(FUN_REG, (yyval.i));
	}
#line 1737 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 422 "micko.y" /* yacc.c:1646  */
    { (yyval.i) = (yyvsp[-1].i); }
#line 1743 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 424 "micko.y" /* yacc.c:1646  */
    {
	(yyval.i) = ++cond_num;
	if(get_type((yyvsp[-2].i)) != get_type((yyvsp[0].i)))
	  err("Nije isti tip.");
	(yyval.i) = take_reg();
	code("\n\t\tJEQ\tistina%d\t", cond_num);
	gen_mov((yyvsp[0].i), (yyval.i));
	code("\n\t\tJMP\tlaz%d\t", cond_num);
	code("\nistina%d:\n\t\tMOV\t", cond_num);
	gen_sym_name((yyvsp[-2].i));
	code(",");
	gen_sym_name((yyval.i));
	code("\nlaz%d:\t\n", cond_num);
	set_type((yyval.i), get_type((yyvsp[-2].i)));
      }
#line 1763 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 443 "micko.y" /* yacc.c:1646  */
    {
	int idx = lookup_symbol((yyvsp[-2].s), VAR|PAR|GVAR);
	if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", (yyvsp[-2].s));

	int fun_idx = lookup_symbol((yyvsp[-2].s), FUN);
	if(fun_idx != NO_INDEX)
          err("Primena postinkrementa na funkciju");

	  code("\n\t\tADDS\t");
	  gen_sym_name(idx);
	  code(",$1,");
	  gen_sym_name(idx);
      }
#line 1782 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 461 "micko.y" /* yacc.c:1646  */
    {
	(yyval.i) = lookup_symbol((yyvsp[0].s), VAR|PAR);
        if((yyval.i) == NO_INDEX)
          err("'%s' undeclared", (yyvsp[0].s));
      }
#line 1792 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 471 "micko.y" /* yacc.c:1646  */
    { (yyval.i) = insert_literal((yyvsp[0].s), INT); }
#line 1798 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 474 "micko.y" /* yacc.c:1646  */
    { (yyval.i) = insert_literal((yyvsp[0].s), UINT); }
#line 1804 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 479 "micko.y" /* yacc.c:1646  */
    {
        fcall_idx = lookup_symbol((yyvsp[0].s), FUN);
        if(fcall_idx == NO_INDEX)
          err("'%s' is not a function", (yyvsp[0].s));
      }
#line 1814 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 485 "micko.y" /* yacc.c:1646  */
    {
        if(get_atr1(fcall_idx) != (yyvsp[-1].i))
          err("wrong number of args to function '%s'", 
              get_name(fcall_idx));
	code("\n\t\t\tCALL\t%s", get_name(fcall_idx));
        if((yyvsp[-1].i) > 0)
        code("\n\t\t\tADDS\t%%15,$%d,%%15", (yyvsp[-1].i) * 4);
        set_type(FUN_REG, get_type(fcall_idx));
        (yyval.i) = FUN_REG;
      }
#line 1829 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 499 "micko.y" /* yacc.c:1646  */
    { (yyval.i) = 0; }
#line 1835 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 502 "micko.y" /* yacc.c:1646  */
    { 
      if(get_atr2(fcall_idx) != get_type((yyvsp[0].i)))
        err("incompatible type for argument in '%s'",
            get_name(fcall_idx));
	free_if_reg((yyvsp[0].i));
        code("\n\t\t\tPUSH\t");
        gen_sym_name((yyvsp[0].i));
      (yyval.i) = 1;
    }
#line 1849 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 515 "micko.y" /* yacc.c:1646  */
    { code("\n@exit%d:", (yyvsp[0].i)); }
#line 1855 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 517 "micko.y" /* yacc.c:1646  */
    { code("\n@exit%d:", (yyvsp[-2].i)); }
#line 1861 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 522 "micko.y" /* yacc.c:1646  */
    {
        (yyval.i) = ++lab_num;
        code("\n@if%d:", lab_num);
	}
#line 1870 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 527 "micko.y" /* yacc.c:1646  */
    {
        code("\n\t\t%s\t@false%d", opp_jumps[(yyvsp[0].i)], (yyvsp[-1].i)); 
        code("\n@true%d:", (yyvsp[-1].i));
	}
#line 1879 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 532 "micko.y" /* yacc.c:1646  */
    {
        code("\n\t\tJMP \t@exit%d", (yyvsp[-4].i));
        code("\n@false%d:", (yyvsp[-4].i));
        (yyval.i) = (yyvsp[-4].i);
	}
#line 1889 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 541 "micko.y" /* yacc.c:1646  */
    {
        if(get_type((yyvsp[-2].i)) != get_type((yyvsp[0].i)))
          err("invalid operands: relational operator");
	(yyval.i) = (yyvsp[-1].i) + ((get_type((yyvsp[-2].i)) - 1) * RELOP_NUMBER);
	gen_cmp((yyvsp[-2].i), (yyvsp[0].i));
      }
#line 1900 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 551 "micko.y" /* yacc.c:1646  */
    {

        if(get_type(fun_idx) == VOID )
		err("Ne moze VOID fja da vrati vrednost !");				

        if(get_type(fun_idx) != get_type((yyvsp[-1].i)))
        	err("incompatible types in return");

	br_ret++;

	gen_mov((yyvsp[-1].i), FUN_REG);
	code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));
      }
#line 1918 "micko.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 566 "micko.y" /* yacc.c:1646  */
    {
        if(get_type(fun_idx) != VOID )
	warn("Fja nije VOID tipa i ocekuje se da vrati neku vrednost.");

	br_ret++;
	}
#line 1929 "micko.tab.c" /* yacc.c:1646  */
    break;


#line 1933 "micko.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 574 "micko.y" /* yacc.c:1906  */


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



main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@main_body:
		MOV 	$3,-4(%14)
branch_pocetak_0:	
		CMPS 	-4(%14),$1
		JEQ	branch_first_0	
		CMPS 	-4(%14),$3
		JEQ	branch_second_0	
		CMPS 	-4(%14),$5
		JEQ	branch_third_0	
		JMP	branch_otherwise_0	
branch_first_0:	
		ADDS	-4(%14),$1,%0
		MOV 	%0,-4(%14)
		JMP	branch_kraj_0	
branch_second_0:	
		ADDS	-4(%14),$3,%0
		MOV 	%0,-4(%14)
		JMP	branch_kraj_0	
branch_third_0:	
		ADDS	-4(%14),$5,%0
		MOV 	%0,-4(%14)
		JMP	branch_kraj_0	
branch_otherwise_0:	
		SUBS	-4(%14),$3,%0
		MOV 	%0,-4(%14)
		JMP	branch_kraj_0	
branch_kraj_0:	
		MOV 	-4(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
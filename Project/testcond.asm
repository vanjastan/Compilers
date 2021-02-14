
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
@main_body:
		MOV 	$3,-4(%14)
		MOV 	$3,-8(%14)
		CMPS 	-4(%14),-8(%14)
		JEQ	istina0	
		MOV 	$0,%0
		JMP	laz0	
istina0:
		MOV	-4(%14),%0
laz0:	

		MOV 	%0,-4(%14)
		CMPS 	-4(%14),-8(%14)
		JEQ	istina1	
		MOV 	$0,%0
		JMP	laz1	
istina1:
		MOV	-4(%14),%0
laz1:	

		MOV 	%0,-8(%14)
		MOV 	-4(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
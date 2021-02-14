
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$12,%15
@main_body:
		MOV 	$0,-8(%14)
		MOV 	$0,-12(%14)
		MOV 	$5,-4(%14)
		MOV 	$2,%0
para_pocetak_0:	
		CMPS	-4(%14),%0
		JLES	para_kraj_0	
		MOV 	-4(%14),-8(%14)
		SUBS	-4(%14),$2,-4(%14)
		JMP	para_pocetak_0	
para_kraj_0:	
		MOV 	-8(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET

fja:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@fja_body:
@if0:
		CMPS 	8(%14),$5
		JGES	@false0
@true0:
		ADDS	8(%14),$5,%0
		MOV 	%0,-4(%14)
		JMP 	@exit0
@false0:
		ADDS	8(%14),$1,%0
		MOV 	%0,-4(%14)
@exit0:
		MOV 	-4(%14),%13
		JMP 	@fja_exit
@fja_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
@main_body:
			PUSH	$6
			CALL	fja
			ADDS	%15,$4,%15
		MOV 	%13,%0
		MOV 	%0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET

f:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
		MOV $4,-4(%14)
@f_body:
		ADDU	8(%14),-4(%14),%0
		SUBU	%0,12(%14),%0
		ADDU	%0,16(%14),%0
		MOV 	%0,%13
		JMP 	@f_exit
@f_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
@main_body:
			PUSH	$2
			PUSH	$3
			PUSH	$5
			CALL	f
			ADDS	%15,$12,%15
		MOV 	%13,%0
		MOV 	%0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
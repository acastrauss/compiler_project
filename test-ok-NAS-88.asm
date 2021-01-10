
f:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
		SUBS	%15,$4,%15
@f_body:
		MOV 	$1,-4(%14)
		MOV 	$3,-8(%14)
		ADDS	-4(%14),-8(%14),%0
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
		CALL	f
		ADDS	%15,$0,%15
		MOV 	%13,%0
		MOV 	%0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
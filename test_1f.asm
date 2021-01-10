
f:
		PUSH	%14
		MOV 	%15,%14
@f_body:
		MOV 	$1,20(%14)
		MOV 	$3,%13
		JMP 	@f_exit
@f_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$1,%15
@main_body:
		PUSH	$1
		PUSH	$1
		PUSH	$2
		PUSH	$3
		PUSH	$5
		CALL	f
		ADDS	%15,$20,%15
		MOV 	%13,%0
		MOV 	%0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
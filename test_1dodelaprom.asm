
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$1,%15
		SUBS	%15,$8,%15
		MOV $6,-8(%14)
		MOV $6,-12(%14)
@main_body:
		MOV 	$1,-1(%14)
		MOV 	$7,-12(%14)
		MOV 	-1(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
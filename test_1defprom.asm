
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
		MOV $5,-4(%14)
		MOV $5,-8(%14)
@main_body:
		MOV 	-4(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
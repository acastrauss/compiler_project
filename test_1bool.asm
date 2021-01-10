
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$2,%15
		MOV $0,-1(%14)
		MOV $0,-2(%14)
@main_body:
		NOT	-2(%14),%0
		MOV 	%0,-1(%14)
		MOV 	-1(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
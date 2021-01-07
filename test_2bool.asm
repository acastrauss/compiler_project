
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$1,%15
		MOV $1,-1(%14)
		SUBS	%15,$1,%15
		MOV $0,-2(%14)
		AND		-1(%14),-2(%14),%0
		XOR		%0,$1,%0
		SUBS	%15,$1,%15
		MOV %0,-3(%14)
@main_body:
		MOV 	-3(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
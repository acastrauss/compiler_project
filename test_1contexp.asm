
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
		SUBS	%15,$4,%15
		MOV $5,-8(%14)
@main_body:
		CMPS 	-8(%14),$7
@if0:
		JNE 	@false0
@true0:
		MOV $11,%0
		JMP 	@exit0
@false0:
		MOV $13,%0
@exit0:
		MOV 	%0,-4(%14)
		MOV 	-4(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
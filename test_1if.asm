
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
		SUBS	%15,$4,%15
		MOV $3,-8(%14)
		SUBS	%15,$4,%15
		MOV $5,-12(%14)
@main_body:
@if0:
		CMPU 	-12(%14),-8(%14)
		JGEU	@false0
@true0:
		MOV 	$5,-4(%14)
		JMP 	@exit0
@false0:
		MOV 	$-5,-4(%14)
@exit0:
		MOV 	-4(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
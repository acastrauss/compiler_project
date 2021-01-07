
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
		MOV $5,-4(%14)
		CMPS 	-4(%14),$3
@if0:
		ADDS	-4(%14),$3,%0
		JLES	@false0
@true0:
		MOV %0,%1
		JMP 	@exit0
@false0:
		ADDS	-4(%14),$5,%1
		MOV %1,%1
@exit0:
		SUBS	%15,$4,%15
		MOV %1,-8(%14)
@main_body:
		MOV 	-8(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
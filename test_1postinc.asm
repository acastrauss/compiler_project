
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
		MOV $2,-4(%14)
		MOV	-4(%14),%0
		ADDS	$1,-4(%14),-4(%14)
		MOV	-4(%14),%1
		ADDS	$1,-4(%14),-4(%14)
		ADDS	%0,%1,%0
		SUBS	%15,$4,%15
		MOV %0,-8(%14)
@main_body:
		MOV 	-8(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
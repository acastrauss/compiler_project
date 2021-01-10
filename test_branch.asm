
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
		MOV $5,-4(%14)
@main_body:
branch_0:
		CMPS 	-4(%14),$1
		JEQ branch_first_0
		CMPS 	-4(%14),$3
		JEQ branch_second_0
		CMPS 	-4(%14),$5
		JEQ branch_third_0
		JMP branch_otherwise_0
branch_first_0:
		ADDS	-4(%14),$1,%0
		MOV 	%0,-4(%14)
		JMP branch_exit_0
branch_second_0:
		ADDS	-4(%14),$3,%1
		MOV 	%1,-4(%14)
		JMP branch_exit_0
branch_third_0:
		ADDS	-4(%14),$5,%2
		MOV 	%2,-4(%14)
		JMP branch_exit_0
branch_otherwise_0:
		SUBS	-4(%14),$3,%3
		MOV 	%3,-4(%14)
branch_exit_0:
		MOV 	-4(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
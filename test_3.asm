
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
		MOV $0,-4(%14)
		SUBS	%15,$4,%15
		MOV $0,-8(%14)
		SUBS	%15,$4,%15
@main_body:
para_0:
		MOV 	$1,-12(%14)
		MOV 	$2,%0
para_body0:
		CMPS 	-12(%14),$5
		JGTS para_exit0
		ADDS	-4(%14),-12(%14),%1
		MOV 	%1,-4(%14)
		SUBS	-8(%14),-12(%14),%2
		MOV 	%2,-8(%14)
		ADDS %0,-12(%14),-12(%14)
		JMP para_body0
para_exit0:
para_1:
		MOV 	$3,-12(%14)
		MOV $1,%2
para_body1:
		CMPS 	-12(%14),$5
		JGTS para_exit1
		SUBS	-4(%14),-12(%14),%3
		MOV 	%3,-8(%14)
		ADDS %2,-12(%14),-12(%14)
		JMP para_body1
para_exit1:
		MOV 	-8(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
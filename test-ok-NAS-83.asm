
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
		SUBS	%15,$16,%15
		SUBS	%15,$4,%15
@main_body:
		MOV 	$1,-4(%14)
		MOV 	$2,-8(%14)
		MOV 	$3,-12(%14)
		MOV	-8(%14),%0
		ADDS	$1,-8(%14),-8(%14)
		MOV 	%0,-16(%14)
		MOV 	$0,-20(%14)
		ADDS	-4(%14),-8(%14),%1
		MOV 	%1,-24(%14)
		MOV 	$1,-28(%14)
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
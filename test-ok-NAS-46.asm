
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
		SUBS	%15,$16,%15
		SUBS	%15,$4,%15
@main_body:
		MOV 	$0,-4(%14)
		MOV 	$1,-8(%14)
		ADDS	-8(%14),$1,%0
		MOV 	%0,-16(%14)
		MOV	-8(%14),%1
		ADDS	$1,-8(%14),-8(%14)
		MOV 	%1,-20(%14)
		MOV 	$0,-24(%14)
		MOV 	$2,-28(%14)
		SUBS	-20(%14),$3,%2
		MOV	8(%14),%3
		ADDS	$1,8(%14),8(%14)
		ADDS	%2,%3,%2
		MOV 	%2,-12(%14)
		MOV	8(%14),%3
		ADDS	$1,8(%14),8(%14)
		MOV 	-20(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET

main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
		SUBS	%15,$16,%15
		SUBS	%15,$4,%15
@main_body:
		MOV 	$1,-4(%14)
		MOV 	$2,-8(%14)
		MOV	-4(%14),%0
		ADDS	$1,-4(%14),-4(%14)
		MOV 	%0,-12(%14)
		MOV 	$0,-16(%14)
		MOV 	$12,-20(%14)
		MOV 	$2,-24(%14)
		MOV 	$2,-28(%14)
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
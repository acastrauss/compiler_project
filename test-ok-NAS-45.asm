
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
		SUBS	%15,$16,%15
		SUBS	%15,$4,%15
@main_body:
		MOV 	$1,-4(%14)
		MOV 	$2,-8(%14)
		MOV 	$0,-16(%14)
		MOV 	$3,-20(%14)
		MOV 	$1,-24(%14)
		MOV 	$3,-28(%14)
		SUBS	-20(%14),$3,%0
		MOV	-24(%14),%1
		ADDS	$1,-24(%14),-24(%14)
		ADDS	%0,%1,%0
		MOV 	%0,-12(%14)
		MOV 	-12(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
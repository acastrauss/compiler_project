
func:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
		SUBS	%15,$16,%15
		SUBS	%15,$4,%15
@func_body:
		MOV 	$0,-4(%14)
		MOV 	$2,-8(%14)
		MOV 	$2,-12(%14)
		MOV	-12(%14),%0
		ADDS	$1,-12(%14),-12(%14)
		MOV 	%0,-16(%14)
		MOV	-8(%14),%1
		ADDS	$1,-8(%14),-8(%14)
		MOV 	%1,-20(%14)
		MOV 	$2,-24(%14)
		MOV 	8(%14),-28(%14)
		ADDU	-28(%14),8(%14),%2
		MOV 	%2,%13
		JMP 	@func_exit
@func_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
@main_body:
		MOV 	$0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
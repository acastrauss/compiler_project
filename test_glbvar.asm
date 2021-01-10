
g:
	WORD	1
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
@main_body:
		MOV	-8(%14),%0
		ADDS	$1,-8(%14),-8(%14)
		ADDS	$2,%0,%0
		SUBS	%0,$5,%0
		MOV 	%0,-4(%14)
		ADDS	$1,-4(%14),-4(%14)
		MOV	-4(%14),%1
		SUBS	$3,%1,%1
		MOV 	%1,-8(%14)
		MOV 	$0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
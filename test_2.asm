
f1:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@f1_body:
		MOV 	$3,-4(%14)
		ADDS	$3,$5,%0
		MOV 	%0,8(%14)
		XOR		$1,$0,%1
		MOV 	%1,%13
		JMP 	@f1_exit
@f1_exit:
		MOV 	%14,%15
		POP 	%14
		RET
f2:
		PUSH	%14
		MOV 	%15,%14
@f2_body:
@f2_exit:
		MOV 	%14,%15
		POP 	%14
		RET
f4:
		PUSH	%14
		MOV 	%15,%14
@f4_body:
@f4_exit:
		MOV 	%14,%15
		POP 	%14
		RET
f3:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@f3_body:
		ADDU	-4(%14),$3,%1
		MOV 	%1,%13
		JMP 	@f3_exit
@f3_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
		SUBS	%15,$1,%15
		SUBS	%15,$4,%15
@main_body:
		MOV	-8(%14),%1
		ADDS	$1,-8(%14),-8(%14)
		ADDS	$2,%1,%1
		SUBS	%1,$5,%1
		MOV 	%1,-4(%14)
		ADDS	$1,-4(%14),-4(%14)
		MOV	-4(%14),%2
		SUBS	$3,%2,%2
		MOV 	%2,-8(%14)
		PUSH	-4(%14)
		CALL	f1
		ADDS	%15,$4,%15
		MOV 	%13,%3
		MOV 	%3,-3(%14)
		PUSH	$1
		CALL	f2
		ADDS	%15,$4,%15
		MOV 	%13,%4
		CALL	f3
		ADDS	%15,$0,%15
		MOV 	%13,%5
		ADDU	%5,$4,%5
		MOV 	%5,-16(%14)
		PUSH	$1
		PUSH	-4(%14)
		CALL	f4
		ADDS	%15,$8,%15
		MOV 	%13,%6
		MOV 	$0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
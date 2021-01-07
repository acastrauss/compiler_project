
f1:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@f1_body:
		MOV 	$3,-4(%14)
		ADDS	$3,$5,%0
		MOV 	%0,8(%14)
		XOR		$1,$0,%0
		MOV 	%0,%13
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
		ADDU	-4(%14),$3,%0
		MOV 	%0,%13
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
		MOV	-8(%14),%0
		ADDS	$1,-8(%14),-8(%14)
		ADDS	$2,%0,%0
		SUBS	%0,$5,%0
		MOV 	%0,-4(%14)
		ADDS	$1,-4(%14),-4(%14)
		MOV	-4(%14),%0
		SUBS	$3,%0,%0
		MOV 	%0,-8(%14)
			PUSH	-4(%14)
			CALL	f1
			ADDS	%15,$4,%15
		MOV 	%13,%0
		MOV 	%0,-3(%14)
			PUSH	$1
			CALL	f2
			ADDS	%15,$4,%15
		MOV 	%13,%0
			CALL	f3
		MOV 	%13,%1
		ADDU	%1,$4,%1
		MOV 	%1,-16(%14)
			PUSH	$1
			PUSH	-4(%14)
			CALL	f4
			ADDS	%15,$8,%15
		MOV 	%13,%1
		MOV 	$0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
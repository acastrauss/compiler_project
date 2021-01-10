
f1:
		PUSH	%14
		MOV 	%15,%14
@f1_body:
		MOV 	$0,%13
		JMP 	@f1_exit
@f1_exit:
		MOV 	%14,%15
		POP 	%14
		RET
f2:
		PUSH	%14
		MOV 	%15,%14
@f2_body:
		MOV 	$0,%13
		JMP 	@f2_exit
@f2_exit:
		MOV 	%14,%15
		POP 	%14
		RET
f3:
		PUSH	%14
		MOV 	%15,%14
@f3_body:
		MOV 	$0,%13
		JMP 	@f3_exit
@f3_exit:
		MOV 	%14,%15
		POP 	%14
		RET
f4:
		PUSH	%14
		MOV 	%15,%14
@f4_body:
		MOV 	$0,%13
		JMP 	@f4_exit
@f4_exit:
		MOV 	%14,%15
		POP 	%14
		RET
f5:
		PUSH	%14
		MOV 	%15,%14
@f5_body:
		MOV 	$0,%13
		JMP 	@f5_exit
@f5_exit:
		MOV 	%14,%15
		POP 	%14
		RET
f6:
		PUSH	%14
		MOV 	%15,%14
@f6_body:
		MOV 	$0,%13
		JMP 	@f6_exit
@f6_exit:
		MOV 	%14,%15
		POP 	%14
		RET
f7:
		PUSH	%14
		MOV 	%15,%14
@f7_body:
		MOV 	$0,%13
		JMP 	@f7_exit
@f7_exit:
		MOV 	%14,%15
		POP 	%14
		RET
f8:
		PUSH	%14
		MOV 	%15,%14
@f8_body:
		MOV 	$0,%13
		JMP 	@f8_exit
@f8_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
@main_body:
		PUSH	$-44
		PUSH	$77
		PUSH	$1
		PUSH	$-5
		PUSH	$0
		PUSH	$6
		PUSH	$5
		PUSH	$1
		PUSH	$6
		PUSH	$5
		CALL	f1
		ADDS	%15,$40,%15
		MOV 	%13,%0
		MOV 	$0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
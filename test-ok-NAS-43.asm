
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
		SUBS	%15,$16,%15
		SUBS	%15,$4,%15
@main_body:
		MOV 	$2,-4(%14)
		MOV 	$1,-8(%14)
		MOV 	$1,-12(%14)
		MOV 	$0,-16(%14)
		MOV 	$23,-20(%14)
		MOV 	$0,-24(%14)
		MOV 	$2,-28(%14)
@if0:
		CMPS 	-4(%14),$3
		JNE 	@false0
@true0:
		MOV	-12(%14),%0
		ADDS	$1,-12(%14),-12(%14)
		JMP 	@exit0
@false0:
@exit0:
		MOV 	$0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
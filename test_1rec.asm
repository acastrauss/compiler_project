
fib:
		PUSH	%14
		MOV 	%15,%14
@fib_body:
@if0:
		CMPS 	8(%14),$1
		JGTS	@false0
@true0:
		MOV 	$1,%13
		JMP 	@fib_exit
		JMP 	@exit0
@false0:
@exit0:
		SUBS	8(%14),$1,%0
		PUSH	%0
		CALL	fib
		ADDS	%15,$4,%15
		MOV 	%13,%0
		ADDS	8(%14),$2,%1
		PUSH	%1
		CALL	fib
		ADDS	%15,$4,%15
		MOV 	%13,%1
		ADDS	%0,%1,%0
		MOV 	%0,%13
		JMP 	@fib_exit
@fib_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
@main_body:
		PUSH	$5
		CALL	fib
		ADDS	%15,$4,%15
		MOV 	%13,%0
		MOV 	%0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET

a:
	WORD	1
c:
	WORD	1
d:
	WORD	1
g:
	BYTE	1
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
		MOV a,-4(%14)
@main_body:
		MOV 	$66,a
		MOV	a,%0
		ADDS	$1,a,a
		SUBS	%0,d,%0
		MOV 	%0,c
		XOR		$1,$0,%1
		MOV 	%1,g
		MOV 	a,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
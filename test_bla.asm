
main:
		PUSH	%14
		MOV 	%15,%14
@main_body:
		ADDS	$95,$358,%0
		SUBS	%0,$27,%0
		ADDS	%0,$55,%0
		SUBS	%0,$457,%0
		ADDS	%0,$1225,%0
		SUBS	%0,$3874,%0
		ADDS	%0,$5550,%0
		MOV 	%0,%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET
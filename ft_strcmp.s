section .text
	global _ft_strcmp

_ft_strcmp: 					; RDI = str1, RSI = str2. 
		xor		rax, rax		; Set counters to 0. 
		xor		rcx, rcx

loop:	
		mov		al, byte[rdi]	; Saving the char to compare it. 
		mov		bl, byte[rsi]	;
		cmp		al, 0 			; Check if we are in the end of str.
		je out
		cmp		bl, 0
		je		out
		cmp		al, bl 			; Comparing str char by char.
		jne		out
		inc 	rdi				; Inc str pointers
		inc 	rsi
		jmp 	loop			; Repeat

out:
		movzx	rax, al 		; Mov and keep sign 
		movzx	rcx, bl
		sub		rax, rcx
		ret

section .text
	global _ft_read

_ft_read:
	mov 	rax, 0x2000003	; read call
	syscall					 
		jc error		; check if error
	jmp out

error:
	mov 	rax, -1			; return -1
	ret						
	
out:
	ret						; return 

section .text
	global _ft_write

_ft_write:
	mov			rax, 0x2000004 ; Moving write (0x2...) to rax.
	syscall 	
	ret

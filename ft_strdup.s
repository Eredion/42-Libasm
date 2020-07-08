section .text
	global _ft_strdup
	extern _malloc
	extern _ft_strlen
	extern _ft_strcpy

_ft_strdup:
	call	_ft_strlen	; str len
	add		rax, 1		; adding str end '\0'
	push	rdi			; pushing str to stack
	mov		rdi, rax
	call	_malloc		; checking malloc error
		jc error
	mov		rdi, rax
	pop		rcx			; getting str from stack
	mov		rsi, rcx
	call	_ft_strcpy
	ret

error:
	xor rax, rax
	ret

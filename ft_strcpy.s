section .text
	global _ft_strcpy

_ft_strcpy:
		push rcx
		push rsi
		mov rax, rdi
		xor rcx, rcx
loop:
		mov dl, byte [rsi + rcx]
		mov	byte [rax + rcx], dl
		cmp byte [rsi + rcx], 0
		je	out
		inc rcx
		jmp loop
out:
	pop rcx
	pop rsi
	ret

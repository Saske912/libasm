global _ft_strcpy

section .text

_ft_strcpy:	mov rcx, 0
			mov rax, rdi
			mov dl, 0
again:		cmp byte [rsi + rcx], 0
			je return
			mov dl, byte [rsi + rcx]
			mov byte [rdi + rcx], dl
			inc rcx
			jmp	again

return:
			mov byte [rdi + rcx], 0
			ret

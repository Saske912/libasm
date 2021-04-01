global _ft_strcmp

section .text

_ft_strcmp:	mov rax, 0
			mov rdx, 0
			push rdi
			push rsi
again:		mov al, byte [rdi]
			mov dl, byte [rsi]
			cmp al, dl
			jne return
			cmp al, 0
			je	return
			cmp dl, 0
			je	return
			inc rdi
			inc rsi
			jmp again

return:		sub rax, rdx
			pop rsi
			pop rdi
			ret

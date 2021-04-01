global _ft_strlen

section .text
_ft_strlen:	mov rax, 0
again:
			cmp byte [rdi + rax], 0
			je	return
			inc rax
			jmp again
return:
			ret

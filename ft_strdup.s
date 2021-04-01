global	_ft_strdup
extern	_ft_strlen
extern	_ft_strcpy
extern	_malloc
extern  ___error

section .text

_ft_strdup:
			xor rax, rax
			push rdi
			call _ft_strlen
			mov rdi, rax
			inc rdi
			call _malloc
			jz error
			mov rdi, rax
			pop rsi
			call _ft_strcpy
			mov rdi, rsi
			ret

error:
			pop rdi
			ret

global	_ft_write
extern	___error

section .text

_ft_write:
			mov	rax, 0x2000004
			syscall
			jc	error
			ret

error:
			push rax
			call ___error
			pop r9
			mov [rax], r9
			mov rax, -1
			ret

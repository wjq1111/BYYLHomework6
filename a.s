	.section .rodata
STR0:
	.string	"%d\n%d"


	.text
	.globl	main
	.type	main, @function
main:
	
	movl	$28, %eax
	movl	$-4, %ebx

	cltd
	idiv	%ebx


	pushl	%eax
	pushl	%edx
	pushl	$STR0
	call	printf
	addl	$12, %esp

	movl	$0, %eax
	ret

	.section	.note.GNU-stack,"",@progbits

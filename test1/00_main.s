# Start

# 序号	0	节点类型	程序开始					child:	1 
# 序号	1	节点类型	Return语句				child:	2 
# 序号	2	节点类型	常量		int10	0		child:	

	.section .rodata


	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp

	popl	%ebp
	movl	$0, %eax
	ret

	.section	.note.GNU-stack,"",@progbits

# Finish

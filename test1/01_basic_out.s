# Start

# 序号	0	节点类型	程序开始					child:	1 3 
# 序号	1	节点类型	Prinf语句				child:	2 
# 序号	2	节点类型	常量		字符串	"test\n"		child:	
# 序号	3	节点类型	Return语句				child:	4 
# 序号	4	节点类型	常量		int10	0		child:	

	.section .rodata
STR0:
	.string	"test\n"


	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp

	subl	$0, %esp
	subl	$0, %ebp
	pushl	$STR0
	call	printf
	addl	$0, %ebp
	addl	$4, %esp
	popl	%ebp
	movl	$0, %eax
	ret

	.section	.note.GNU-stack,"",@progbits

# Finish

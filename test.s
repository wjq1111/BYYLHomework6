# Start

# 序号	0	节点类型	程序开始					child:	1 5 8 
# 序号	1	节点类型	声明语句					child:	2 3 
# 序号	2	节点类型	数据类型		char		child:	
# 序号	3	节点类型	变量名	a				child:	4 
# 序号	4	节点类型	常量		字符		'\t'		child:	
# 序号	5	节点类型	Prinf语句				child:	6 
# 序号	6	节点类型	常量		字符串	"%c\n"		child:	7 
# 序号	7	节点类型	变量名	a				child:	
# 序号	8	节点类型	Return语句				child:	9 
# 序号	9	节点类型	常量		int10	0		child:	

	.section .rodata
STR0:
	.string	"%c\n"


	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp

	movl	$'\t', -4(%ebp)

	subl	$4, %esp
	pushl	-4(%ebp)
	subl	$4, %ebp
	pushl	$STR0
	call	printf
	addl	$4, %ebp
	addl	$12, %esp

	popl	%ebp
	movl	$0, %eax
	ret

	.section	.note.GNU-stack,"",@progbits

# Finish

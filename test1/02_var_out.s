# Start

# 序号	0	节点类型	程序开始					child:	1 4 7 10 
# 序号	1	节点类型	声明语句					child:	2 3 
# 序号	2	节点类型	数据类型		int			child:	
# 序号	3	节点类型	变量名	a				child:	
# 序号	4	节点类型	赋值语句					child:	5 6 
# 序号	5	节点类型	变量名	a				child:	
# 序号	6	节点类型	常量		int10	10		child:	
# 序号	7	节点类型	Prinf语句				child:	8 
# 序号	8	节点类型	常量		字符串	"test:%d\n"		child:	9 
# 序号	9	节点类型	变量名	a				child:	
# 序号	10	节点类型	Return语句				child:	11 
# 序号	11	节点类型	常量		int10	0		child:	

	.section .rodata
STR0:
	.string	"test:%d\n"


	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp


	movl	$10, -4(%ebp)

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

# Start

# 序号	0	节点类型	程序开始					child:	1 4 7 12 15 18 
# 序号	1	节点类型	声明语句					child:	2 3 
# 序号	2	节点类型	数据类型		int			child:	
# 序号	3	节点类型	变量名	a				child:	
# 序号	4	节点类型	声明语句					child:	5 6 
# 序号	5	节点类型	数据类型		int			child:	
# 序号	6	节点类型	变量名	b				child:	
# 序号	7	节点类型	赋值语句					child:	8 9 
# 序号	8	节点类型	变量名	a				child:	
# 序号	9	节点类型	赋值语句					child:	10 11 
# 序号	10	节点类型	变量名	b				child:	
# 序号	11	节点类型	常量		int10	3		child:	
# 序号	12	节点类型	Prinf语句				child:	13 
# 序号	13	节点类型	常量		字符串	"%d"		child:	14 
# 序号	14	节点类型	变量名	a				child:	
# 序号	15	节点类型	Prinf语句				child:	16 
# 序号	16	节点类型	常量		字符串	"%d"		child:	17 
# 序号	17	节点类型	变量名	b				child:	
# 序号	18	节点类型	Return语句				child:	19 
# 序号	19	节点类型	常量		int10	0		child:	

	.section .rodata
STR0:
	.string	"%d"
STR1:
	.string	"%d"


	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp



	movl	$3, -8(%ebp)

	movl	-8(%ebp), %ecx
	movl	%ecx, -4(%ebp)

	subl	$8, %esp
	pushl	-4(%ebp)
	subl	$8, %ebp
	pushl	$STR0
	call	printf
	addl	$8, %ebp
	addl	$16, %esp

	subl	$8, %esp
	pushl	-8(%ebp)
	subl	$8, %ebp
	pushl	$STR0
	call	printf
	addl	$8, %ebp
	addl	$16, %esp

	popl	%ebp
	movl	$0, %eax
	ret

	.section	.note.GNU-stack,"",@progbits

# Finish

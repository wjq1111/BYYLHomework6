# Start

# 序号	0	节点类型	程序开始					child:	1 4 7 10 13 16 19 22 29 32 
# 序号	1	节点类型	声明语句					child:	2 3 
# 序号	2	节点类型	数据类型		int			child:	
# 序号	3	节点类型	变量名	a				child:	
# 序号	4	节点类型	声明语句					child:	5 6 
# 序号	5	节点类型	数据类型		int			child:	
# 序号	6	节点类型	变量名	b				child:	
# 序号	7	节点类型	声明语句					child:	8 9 
# 序号	8	节点类型	数据类型		int			child:	
# 序号	9	节点类型	变量名	c				child:	
# 序号	10	节点类型	赋值语句					child:	11 12 
# 序号	11	节点类型	变量名	a				child:	
# 序号	12	节点类型	常量		int10	16		child:	
# 序号	13	节点类型	赋值语句					child:	14 15 
# 序号	14	节点类型	变量名	b				child:	
# 序号	15	节点类型	常量		int10	2		child:	
# 序号	16	节点类型	赋值语句					child:	17 18 
# 序号	17	节点类型	变量名	c				child:	
# 序号	18	节点类型	常量		int10	30		child:	
# 序号	19	节点类型	声明语句					child:	20 21 
# 序号	20	节点类型	数据类型		int			child:	
# 序号	21	节点类型	变量名	d				child:	
# 序号	22	节点类型	赋值语句					child:	23 24 
# 序号	23	节点类型	变量名	d				child:	
# 序号	24	节点类型	运算		操作符	+		child:	25 26 
# 序号	25	节点类型	变量名	a				child:	
# 序号	26	节点类型	运算		操作符	*		child:	27 28 
# 序号	27	节点类型	变量名	b				child:	
# 序号	28	节点类型	变量名	c				child:	
# 序号	29	节点类型	Prinf语句				child:	30 
# 序号	30	节点类型	常量		字符串	"%d\n"		child:	31 
# 序号	31	节点类型	变量名	d				child:	
# 序号	32	节点类型	Return语句				child:	33 
# 序号	33	节点类型	常量		int10	0		child:	

	.section .rodata
STR0:
	.string	"%d\n"


	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp




	movl	$16, -4(%ebp)

	movl	$2, -8(%ebp)

	movl	$30, -12(%ebp)


	subl	$16, %esp
	pushl	-8(%ebp)
	pushl	-12(%ebp)
	popl	%eax
	popl	%ebx
	imul	%eax, %ebx
	pushl	%ebx
	pushl	-4(%ebp)
	popl	%eax
	popl	%ebx
	addl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, -16(%ebp)
	addl	$16, %esp

	subl	$16, %esp
	pushl	-16(%ebp)
	subl	$16, %ebp
	pushl	$STR0
	call	printf
	addl	$16, %ebp
	addl	$24, %esp

	popl	%ebp
	movl	$0, %eax
	ret

	.section	.note.GNU-stack,"",@progbits

# Finish

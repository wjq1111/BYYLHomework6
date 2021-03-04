# Start

# 序号	0	节点类型	程序开始					child:	1 4 7 10 13 16 19 22 26 41 44 
# 序号	1	节点类型	声明语句					child:	2 3 
# 序号	2	节点类型	数据类型		int			child:	
# 序号	3	节点类型	变量名	a				child:	
# 序号	4	节点类型	赋值语句					child:	5 6 
# 序号	5	节点类型	变量名	a				child:	
# 序号	6	节点类型	常量		int10	20		child:	
# 序号	7	节点类型	声明语句					child:	8 9 
# 序号	8	节点类型	数据类型		int			child:	
# 序号	9	节点类型	变量名	b				child:	
# 序号	10	节点类型	赋值语句					child:	11 12 
# 序号	11	节点类型	变量名	b				child:	
# 序号	12	节点类型	常量		int10	5		child:	
# 序号	13	节点类型	声明语句					child:	14 15 
# 序号	14	节点类型	数据类型		int			child:	
# 序号	15	节点类型	变量名	c				child:	
# 序号	16	节点类型	赋值语句					child:	17 18 
# 序号	17	节点类型	变量名	c				child:	
# 序号	18	节点类型	常量		int10	6		child:	
# 序号	19	节点类型	声明语句					child:	20 21 
# 序号	20	节点类型	数据类型		int			child:	
# 序号	21	节点类型	变量名	d				child:	
# 序号	22	节点类型	赋值语句					child:	23 24 
# 序号	23	节点类型	变量名	d				child:	
# 序号	24	节点类型	运算		操作符	-		child:	25 
# 序号	25	节点类型	常量		int10	4		child:	
# 序号	26	节点类型	赋值语句					child:	27 28 
# 序号	27	节点类型	变量名	a				child:	
# 序号	28	节点类型	运算		操作符	-		child:	29 34 
# 序号	29	节点类型	运算		操作符	+		child:	30 31 
# 序号	30	节点类型	变量名	a				child:	
# 序号	31	节点类型	运算		操作符	*		child:	32 33 
# 序号	32	节点类型	变量名	c				child:	
# 序号	33	节点类型	变量名	d				child:	
# 序号	34	节点类型	运算		操作符	/		child:	35 40 
# 序号	35	节点类型	运算		操作符	%		child:	36 37 
# 序号	36	节点类型	变量名	b				child:	
# 序号	37	节点类型	运算		操作符	+		child:	38 39 
# 序号	38	节点类型	变量名	a				child:	
# 序号	39	节点类型	变量名	d				child:	
# 序号	40	节点类型	变量名	a				child:	
# 序号	41	节点类型	Prinf语句				child:	42 
# 序号	42	节点类型	常量		字符串	"%d"		child:	43 
# 序号	43	节点类型	变量名	a				child:	
# 序号	44	节点类型	Return语句				child:	45 
# 序号	45	节点类型	常量		int10	0		child:	

	.section .rodata
STR0:
	.string	"%d"


	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp


	movl	$20, -4(%ebp)


	movl	$5, -8(%ebp)


	movl	$6, -12(%ebp)


	subl	$16, %esp
	pushl	$4
	popl	%eax
	imul	$-1, %eax
	movl	%eax, -16(%ebp)
	addl	$16, %esp

	subl	$16, %esp
	pushl	-12(%ebp)
	pushl	-16(%ebp)
	popl	%eax
	popl	%ebx
	imul	%eax, %ebx
	pushl	%ebx
	pushl	-4(%ebp)
	popl	%eax
	popl	%ebx
	addl	%eax, %ebx
	pushl	%ebx
	pushl	-4(%ebp)
	pushl	-16(%ebp)
	popl	%eax
	popl	%ebx
	addl	%eax, %ebx
	pushl	%ebx
	popl	%ebx
	pushl	-8(%ebp)
	pushl	%ebx
	popl	%ebx
	popl	%eax
	cltd
	idiv	%ebx
	pushl	%edx
	pushl	-4(%ebp)
	popl	%ebx
	popl	%eax
	cltd
	idiv	%ebx
	pushl	%eax
	popl	%eax
	popl	%ebx
	subl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, -4(%ebp)
	addl	$16, %esp

	subl	$16, %esp
	pushl	-4(%ebp)
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

# Start

# 序号	0	节点类型	程序开始					child:	1 4 7 10 13 16 19 22 37 53 
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
# 序号	12	节点类型	常量		int10	1		child:	
# 序号	13	节点类型	赋值语句					child:	14 15 
# 序号	14	节点类型	变量名	b				child:	
# 序号	15	节点类型	常量		int10	4		child:	
# 序号	16	节点类型	赋值语句					child:	17 18 
# 序号	17	节点类型	变量名	c				child:	
# 序号	18	节点类型	常量		int10	28		child:	
# 序号	19	节点类型	声明语句					child:	20 21 
# 序号	20	节点类型	数据类型		int			child:	
# 序号	21	节点类型	变量名	t				child:	
# 序号	22	节点类型	If语句					0child:	23 28 34 
# 序号	23	节点类型	运算		操作符	!=		child:	24 27 
# 序号	24	节点类型	运算		操作符	+		child:	25 26 
# 序号	25	节点类型	变量名	c				child:	
# 序号	26	节点类型	变量名	a				child:	
# 序号	27	节点类型	变量名	b				child:	
# 序号	28	节点类型	赋值语句					child:	29 30 
# 序号	29	节点类型	变量名	t				child:	
# 序号	30	节点类型	运算		操作符	%		child:	31 32 
# 序号	31	节点类型	变量名	c				child:	
# 序号	32	节点类型	运算		操作符	-		child:	33 
# 序号	33	节点类型	变量名	b				child:	
# 序号	34	节点类型	Prinf语句				child:	35 
# 序号	35	节点类型	常量		字符串	"%d\n"		child:	36 
# 序号	36	节点类型	变量名	t				child:	
# 序号	37	节点类型	If语句					1child:	38 43 50 
# 序号	38	节点类型	运算		操作符	==		child:	39 42 
# 序号	39	节点类型	运算		操作符	-		child:	40 41 
# 序号	40	节点类型	变量名	b				child:	
# 序号	41	节点类型	变量名	c				child:	
# 序号	42	节点类型	变量名	a				child:	
# 序号	43	节点类型	赋值语句					child:	44 45 
# 序号	44	节点类型	变量名	t				child:	
# 序号	45	节点类型	运算		操作符	+		child:	46 49 
# 序号	46	节点类型	运算		操作符	%		child:	47 48 
# 序号	47	节点类型	变量名	c				child:	
# 序号	48	节点类型	变量名	b				child:	
# 序号	49	节点类型	变量名	b				child:	
# 序号	50	节点类型	Prinf语句				child:	51 
# 序号	51	节点类型	常量		字符串	"%d\n"		child:	52 
# 序号	52	节点类型	变量名	t				child:	
# 序号	53	节点类型	Return语句				child:	54 
# 序号	54	节点类型	常量		int10	0		child:	

	.section .rodata
STR0:
	.string	"%d\n"
STR1:
	.string	"%d\n"


	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp




	movl	$1, -4(%ebp)

	movl	$4, -8(%ebp)

	movl	$28, -12(%ebp)


	subl	$16, %esp
	pushl	-12(%ebp)
	pushl	-4(%ebp)
	popl	%eax
	popl	%ebx
	addl	%eax, %ebx
	movl	%ebx, %eax
	pushl	%eax
	movl	-8(%ebp), %ebx
	popl	%eax
	addl	$16, %esp
	cmp		%ebx, %eax
	je		.Lif01

.Lif00:
	subl	$16, %esp
	pushl	-8(%ebp)
	popl	%eax
	imul	$-1, %eax
	pushl	%eax
	popl	%eax
	pushl	-12(%ebp)
	pushl	%eax
	popl	%ebx
	popl	%eax
	cltd
	idiv	%ebx
	movl	%edx, %eax
	movl	%eax, -16(%ebp)
	addl	$16, %esp

	subl	$16, %esp
	pushl	-16(%ebp)
	subl	$16, %ebp
	pushl	$STR0
	call	printf
	addl	$16, %ebp
	addl	$24, %esp

.Lif01:
	subl	$16, %esp
	pushl	-8(%ebp)
	pushl	-12(%ebp)
	popl	%eax
	popl	%ebx
	subl	%eax, %ebx
	movl	%ebx, %eax
	pushl	%eax
	movl	-4(%ebp), %ebx
	popl	%eax
	addl	$16, %esp
	cmp		%ebx, %eax
	jne		.Lif11

.Lif10:
	subl	$16, %esp
	pushl	-12(%ebp)
	pushl	-8(%ebp)
	popl	%ebx
	popl	%eax
	cltd
	idiv	%ebx
	pushl	%edx
	pushl	-8(%ebp)
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

.Lif11:
	popl	%ebp
	movl	$0, %eax
	ret

	.section	.note.GNU-stack,"",@progbits

# Finish

# Start

# 序号	0	节点类型	程序开始					child:	1 4 7 10 13 16 19 23 26 29 62 
# 序号	1	节点类型	声明语句					child:	2 3 
# 序号	2	节点类型	数据类型		int			child:	
# 序号	3	节点类型	变量名	a				child:	
# 序号	4	节点类型	声明语句					child:	5 6 
# 序号	5	节点类型	数据类型		int			child:	
# 序号	6	节点类型	变量名	b				child:	
# 序号	7	节点类型	声明语句					child:	8 9 
# 序号	8	节点类型	数据类型		int			child:	
# 序号	9	节点类型	变量名	c				child:	
# 序号	10	节点类型	声明语句					child:	11 12 
# 序号	11	节点类型	数据类型		int			child:	
# 序号	12	节点类型	变量名	d				child:	
# 序号	13	节点类型	赋值语句					child:	14 15 
# 序号	14	节点类型	变量名	a				child:	
# 序号	15	节点类型	常量		int10	3		child:	
# 序号	16	节点类型	赋值语句					child:	17 18 
# 序号	17	节点类型	变量名	b				child:	
# 序号	18	节点类型	常量		int10	8		child:	
# 序号	19	节点类型	赋值语句					child:	20 21 
# 序号	20	节点类型	变量名	c				child:	
# 序号	21	节点类型	运算		操作符	-		child:	22 
# 序号	22	节点类型	常量		int10	4		child:	
# 序号	23	节点类型	赋值语句					child:	24 25 
# 序号	24	节点类型	变量名	d				child:	
# 序号	25	节点类型	常量		int10	15		child:	
# 序号	26	节点类型	声明语句					child:	27 28 
# 序号	27	节点类型	数据类型		int			child:	
# 序号	28	节点类型	变量名	t				child:	
# 序号	29	节点类型	If语句					0child:	30 51 59 
# 序号	30	节点类型	运算		操作符	||		child:	31 42 
# 序号	31	节点类型	运算		操作符	&&		child:	32 39 
# 序号	32	节点类型	运算		操作符	!=		child:	33 38 
# 序号	33	节点类型	运算		操作符	%		child:	34 35 
# 序号	34	节点类型	变量名	d				child:	
# 序号	35	节点类型	运算		操作符	-		child:	36 37 
# 序号	36	节点类型	变量名	b				child:	
# 序号	37	节点类型	变量名	a				child:	
# 序号	38	节点类型	常量		int10	0		child:	
# 序号	39	节点类型	运算		操作符	>		child:	40 41 
# 序号	40	节点类型	变量名	a				child:	
# 序号	41	节点类型	常量		int10	0		child:	
# 序号	42	节点类型	运算		操作符	&&		child:	43 48 
# 序号	43	节点类型	运算		操作符	==		child:	44 47 
# 序号	44	节点类型	运算		操作符	%		child:	45 46 
# 序号	45	节点类型	变量名	d				child:	
# 序号	46	节点类型	常量		int10	3		child:	
# 序号	47	节点类型	常量		int10	0		child:	
# 序号	48	节点类型	运算		操作符	>		child:	49 50 
# 序号	49	节点类型	变量名	c				child:	
# 序号	50	节点类型	常量		int10	0		child:	
# 序号	51	节点类型	赋值语句					child:	52 53 
# 序号	52	节点类型	变量名	t				child:	
# 序号	53	节点类型	运算		操作符	-		child:	54 57 
# 序号	54	节点类型	运算		操作符	+		child:	55 56 
# 序号	55	节点类型	变量名	d				child:	
# 序号	56	节点类型	变量名	c				child:	
# 序号	57	节点类型	运算		操作符	-		child:	58 
# 序号	58	节点类型	变量名	b				child:	
# 序号	59	节点类型	Prinf语句				child:	60 
# 序号	60	节点类型	常量		字符串	"%d"		child:	61 
# 序号	61	节点类型	变量名	t				child:	
# 序号	62	节点类型	Return语句				child:	63 
# 序号	63	节点类型	常量		int10	0		child:	

	.section .rodata
STR0:
	.string	"%d"


	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp





	movl	$3, -4(%ebp)

	movl	$8, -8(%ebp)

	subl	$16, %esp
	pushl	$4
	popl	%eax
	imul	$-1, %eax
	movl	%eax, -12(%ebp)
	addl	$16, %esp

	movl	$15, -16(%ebp)


	subl	$20, %esp
	pushl	-8(%ebp)
	pushl	-4(%ebp)
	popl	%eax
	popl	%ebx
	subl	%eax, %ebx
	pushl	%ebx
	popl	%ebx
	pushl	-16(%ebp)
	pushl	%ebx
	popl	%ebx
	popl	%eax
	cltd
	idiv	%ebx
	movl	%edx, %eax
	pushl	%eax
	movl	$0, %ebx
	popl	%eax
	addl	$20, %esp
	cmp		%ebx, %eax
	je		.if011

	subl	$20, %esp
	movl	-4(%ebp), %eax
	pushl	%eax
	movl	$0, %ebx
	popl	%eax
	addl	$20, %esp
	cmp		%ebx, %eax
	jle		.if011

	jmp		.Lif00
.if011:
	subl	$20, %esp
	pushl	-16(%ebp)
	pushl	$3
	popl	%ebx
	popl	%eax
	cltd
	idiv	%ebx
	movl	%edx, %eax
	pushl	%eax
	movl	$0, %ebx
	popl	%eax
	addl	$20, %esp
	cmp		%ebx, %eax
	jne		.if012

	subl	$20, %esp
	movl	-12(%ebp), %eax
	pushl	%eax
	movl	$0, %ebx
	popl	%eax
	addl	$20, %esp
	cmp		%ebx, %eax
	jle		.if012

	jmp		.Lif00
.if012:
	jmp		.Lif01

.Lif00:
	subl	$20, %esp
	pushl	-16(%ebp)
	pushl	-12(%ebp)
	popl	%eax
	popl	%ebx
	addl	%eax, %ebx
	pushl	%ebx
	pushl	-8(%ebp)
	popl	%eax
	imul	$-1, %eax
	pushl	%eax
	popl	%eax
	popl	%ebx
	subl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, -20(%ebp)
	addl	$20, %esp

	subl	$20, %esp
	pushl	-20(%ebp)
	subl	$20, %ebp
	pushl	$STR0
	call	printf
	addl	$20, %ebp
	addl	$28, %esp

.Lif01:
	popl	%ebp
	movl	$0, %eax
	ret

	.section	.note.GNU-stack,"",@progbits

# Finish

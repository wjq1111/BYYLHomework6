# Start

# 序号	0	节点类型	程序开始					child:	1 4 7 10 13 16 19 22 25 28 31 34 37 40 43 
# 序号	1	节点类型	声明语句					child:	2 3 
# 序号	2	节点类型	数据类型		char		child:	
# 序号	3	节点类型	变量名	s				child:	
# 序号	4	节点类型	声明语句					child:	5 6 
# 序号	5	节点类型	数据类型		char		child:	
# 序号	6	节点类型	变量名	t				child:	
# 序号	7	节点类型	声明语句					child:	8 9 
# 序号	8	节点类型	数据类型		char		child:	
# 序号	9	节点类型	变量名	a				child:	
# 序号	10	节点类型	声明语句					child:	11 12 
# 序号	11	节点类型	数据类型		char		child:	
# 序号	12	节点类型	变量名	r				child:	
# 序号	13	节点类型	赋值语句					child:	14 15 
# 序号	14	节点类型	变量名	s				child:	
# 序号	15	节点类型	常量		字符		'9'		child:	
# 序号	16	节点类型	赋值语句					child:	17 18 
# 序号	17	节点类型	变量名	t				child:	
# 序号	18	节点类型	常量		字符		'\t'		child:	
# 序号	19	节点类型	赋值语句					child:	20 21 
# 序号	20	节点类型	变量名	a				child:	
# 序号	21	节点类型	常量		字符		't'		child:	
# 序号	22	节点类型	赋值语句					child:	23 24 
# 序号	23	节点类型	变量名	r				child:	
# 序号	24	节点类型	常量		字符		'\n'		child:	
# 序号	25	节点类型	赋值语句					child:	26 27 
# 序号	26	节点类型	变量名	t				child:	
# 序号	27	节点类型	常量		字符		'a'		child:	
# 序号	28	节点类型	Prinf语句				child:	29 
# 序号	29	节点类型	常量		字符串	"%c"		child:	30 
# 序号	30	节点类型	变量名	s				child:	
# 序号	31	节点类型	Prinf语句				child:	32 
# 序号	32	节点类型	常量		字符串	"%c"		child:	33 
# 序号	33	节点类型	变量名	t				child:	
# 序号	34	节点类型	Prinf语句				child:	35 
# 序号	35	节点类型	常量		字符串	"%c"		child:	36 
# 序号	36	节点类型	变量名	a				child:	
# 序号	37	节点类型	Prinf语句				child:	38 
# 序号	38	节点类型	常量		字符串	"%c"		child:	39 
# 序号	39	节点类型	变量名	r				child:	
# 序号	40	节点类型	Prinf语句				child:	41 
# 序号	41	节点类型	常量		字符串	"%c"		child:	42 
# 序号	42	节点类型	变量名	t				child:	
# 序号	43	节点类型	Return语句				child:	44 
# 序号	44	节点类型	常量		int10	0		child:	

	.section .rodata
STR0:
	.string	"%c"
STR1:
	.string	"%c"
STR2:
	.string	"%c"
STR3:
	.string	"%c"
STR4:
	.string	"%c"


	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp





	movl	$'9', -4(%ebp)

	movl	$'\t', -8(%ebp)

	movl	$'t', -12(%ebp)

	movl	$'\n', -16(%ebp)

	movl	$'a', -8(%ebp)

	subl	$16, %esp
	pushl	-4(%ebp)
	subl	$16, %ebp
	pushl	$STR0
	call	printf
	addl	$16, %ebp
	addl	$24, %esp

	subl	$16, %esp
	pushl	-8(%ebp)
	subl	$16, %ebp
	pushl	$STR0
	call	printf
	addl	$16, %ebp
	addl	$24, %esp

	subl	$16, %esp
	pushl	-12(%ebp)
	subl	$16, %ebp
	pushl	$STR0
	call	printf
	addl	$16, %ebp
	addl	$24, %esp

	subl	$16, %esp
	pushl	-16(%ebp)
	subl	$16, %ebp
	pushl	$STR0
	call	printf
	addl	$16, %ebp
	addl	$24, %esp

	subl	$16, %esp
	pushl	-8(%ebp)
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

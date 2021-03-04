# Start

# 序号	0	节点类型	程序开始					child:	1 4 7 11 15 18 21 26 31 35 
# 序号	1	节点类型	声明语句					child:	2 3 
# 序号	2	节点类型	数据类型		int			child:	
# 序号	3	节点类型	变量名	a				child:	
# 序号	4	节点类型	声明语句					child:	5 6 
# 序号	5	节点类型	数据类型		int			child:	
# 序号	6	节点类型	变量名	b				child:	
# 序号	7	节点类型	赋值语句					child:	8 9 
# 序号	8	节点类型	变量名	a				child:	
# 序号	9	节点类型	运算		操作符	-		child:	10 
# 序号	10	节点类型	常量		int10	100020		child:	
# 序号	11	节点类型	赋值语句					child:	12 13 
# 序号	12	节点类型	变量名	b				child:	
# 序号	13	节点类型	运算		操作符	-		child:	14 
# 序号	14	节点类型	常量		int10	3		child:	
# 序号	15	节点类型	声明语句					child:	16 17 
# 序号	16	节点类型	数据类型		int			child:	
# 序号	17	节点类型	变量名	c				child:	
# 序号	18	节点类型	声明语句					child:	19 20 
# 序号	19	节点类型	数据类型		int			child:	
# 序号	20	节点类型	变量名	d				child:	
# 序号	21	节点类型	赋值语句					child:	22 23 
# 序号	22	节点类型	变量名	c				child:	
# 序号	23	节点类型	运算		操作符	/		child:	24 25 
# 序号	24	节点类型	变量名	a				child:	
# 序号	25	节点类型	变量名	b				child:	
# 序号	26	节点类型	赋值语句					child:	27 28 
# 序号	27	节点类型	变量名	d				child:	
# 序号	28	节点类型	运算		操作符	%		child:	29 30 
# 序号	29	节点类型	变量名	a				child:	
# 序号	30	节点类型	变量名	b				child:	
# 序号	31	节点类型	Prinf语句				child:	32 
# 序号	32	节点类型	常量		字符串	"test:%d %d\n"		child:	33 34 
# 序号	33	节点类型	变量名	c				child:	
# 序号	34	节点类型	变量名	d				child:	
# 序号	35	节点类型	Return语句				child:	36 
# 序号	36	节点类型	常量		int10	0		child:	

	.section .rodata
STR0:
	.string	"test:%d %d\n"


	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp



	subl	$8, %esp
	pushl	$100020
	popl	%eax
	imul	$-1, %eax
	movl	%eax, -4(%ebp)
	addl	$8, %esp

	subl	$8, %esp
	pushl	$3
	popl	%eax
	imul	$-1, %eax
	movl	%eax, -8(%ebp)
	addl	$8, %esp



	subl	$16, %esp
	pushl	-4(%ebp)
	pushl	-8(%ebp)
	popl	%ebx
	popl	%eax
	cltd
	idiv	%ebx
	movl	%eax, -12(%ebp)
	addl	$16, %esp

	subl	$16, %esp
	pushl	-4(%ebp)
	pushl	-8(%ebp)
	popl	%ebx
	popl	%eax
	cltd
	idiv	%ebx
	movl	%edx, %eax
	movl	%eax, -16(%ebp)
	addl	$16, %esp

	subl	$16, %esp
	pushl	-16(%ebp)
	pushl	-12(%ebp)
	subl	$16, %ebp
	pushl	$STR0
	call	printf
	addl	$16, %ebp
	addl	$28, %esp

	popl	%ebp
	movl	$0, %eax
	ret

	.section	.note.GNU-stack,"",@progbits

# Finish

# Start

# 序号	0	节点类型	程序开始					child:	1 4 7 11 14 30 33 
# 序号	1	节点类型	声明语句					child:	2 3 
# 序号	2	节点类型	数据类型		int			child:	
# 序号	3	节点类型	变量名	a				child:	
# 序号	4	节点类型	声明语句					child:	5 6 
# 序号	5	节点类型	数据类型		int			child:	
# 序号	6	节点类型	变量名	b				child:	
# 序号	7	节点类型	赋值语句					child:	8 9 
# 序号	8	节点类型	变量名	a				child:	
# 序号	9	节点类型	运算		操作符	-		child:	10 
# 序号	10	节点类型	常量		int10	2		child:	
# 序号	11	节点类型	赋值语句					child:	12 13 
# 序号	12	节点类型	变量名	b				child:	
# 序号	13	节点类型	常量		int10	1		child:	
# 序号	14	节点类型	赋值语句					child:	15 16 
# 序号	15	节点类型	变量名	a				child:	
# 序号	16	节点类型	运算		操作符	+		child:	17 21 
# 序号	17	节点类型	运算		操作符	-		child:	18 19 
# 序号	18	节点类型	变量名	a				child:	
# 序号	19	节点类型	运算		操作符	-		child:	20 
# 序号	20	节点类型	变量名	b				child:	
# 序号	21	节点类型	运算		操作符	%		child:	22 26 
# 序号	22	节点类型	运算		操作符	-		child:	23 
# 序号	23	节点类型	运算		操作符	+		child:	24 25 
# 序号	24	节点类型	变量名	a				child:	
# 序号	25	节点类型	变量名	b				child:	
# 序号	26	节点类型	运算		操作符	-		child:	27 
# 序号	27	节点类型	运算		操作符	-		child:	28 29 
# 序号	28	节点类型	变量名	a				child:	
# 序号	29	节点类型	变量名	b				child:	
# 序号	30	节点类型	Prinf语句				child:	31 
# 序号	31	节点类型	常量		字符串	"%d\n"		child:	32 
# 序号	32	节点类型	变量名	a				child:	
# 序号	33	节点类型	Return语句				child:	34 
# 序号	34	节点类型	常量		int10	0		child:	

	.section .rodata
STR0:
	.string	"%d\n"


	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp



	subl	$8, %esp
	pushl	$2
	popl	%eax
	imul	$-1, %eax
	movl	%eax, -4(%ebp)
	addl	$8, %esp

	movl	$1, -8(%ebp)

	subl	$8, %esp
	pushl	-8(%ebp)
	popl	%eax
	imul	$-1, %eax
	pushl	%eax
	popl	%eax
	pushl	-4(%ebp)
	pushl	%eax
	popl	%eax
	popl	%ebx
	subl	%eax, %ebx
	pushl	%ebx
	pushl	-4(%ebp)
	pushl	-8(%ebp)
	popl	%eax
	popl	%ebx
	addl	%eax, %ebx
	pushl	%ebx
	popl	%eax
	imul	$-1, %eax
	pushl	%eax
	pushl	-4(%ebp)
	pushl	-8(%ebp)
	popl	%eax
	popl	%ebx
	subl	%eax, %ebx
	pushl	%ebx
	popl	%eax
	imul	$-1, %eax
	pushl	%eax
	popl	%ebx
	popl	%eax
	cltd
	idiv	%ebx
	pushl	%edx
	popl	%eax
	popl	%ebx
	addl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, -4(%ebp)
	addl	$8, %esp

	subl	$8, %esp
	pushl	-4(%ebp)
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

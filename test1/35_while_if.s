# Start

# 序号	0	节点类型	程序开始					child:	1 4 7 10 13 43 46 49 
# 序号	1	节点类型	声明语句					child:	2 3 
# 序号	2	节点类型	数据类型		int			child:	
# 序号	3	节点类型	变量名	a				child:	
# 序号	4	节点类型	赋值语句					child:	5 6 
# 序号	5	节点类型	变量名	a				child:	
# 序号	6	节点类型	常量		int10	0		child:	
# 序号	7	节点类型	声明语句					child:	8 9 
# 序号	8	节点类型	数据类型		int			child:	
# 序号	9	节点类型	变量名	b				child:	
# 序号	10	节点类型	赋值语句					child:	11 12 
# 序号	11	节点类型	变量名	b				child:	
# 序号	12	节点类型	常量		int10	0		child:	
# 序号	13	节点类型	While语句				child:	14 17 38 
# 序号	14	节点类型	运算		操作符	<		child:	15 16 
# 序号	15	节点类型	变量名	a				child:	
# 序号	16	节点类型	常量		int10	100		child:	
# 序号	17	节点类型	If语句					1child:	18 21 24 25 
# 序号	18	节点类型	运算		操作符	==		child:	19 20 
# 序号	19	节点类型	变量名	a				child:	
# 序号	20	节点类型	常量		int10	5		child:	
# 序号	21	节点类型	赋值语句					child:	22 23 
# 序号	22	节点类型	变量名	b				child:	
# 序号	23	节点类型	常量		int10	25		child:	
# 序号	24	节点类型	Else语句				child:	
# 序号	25	节点类型	If语句					0child:	26 29 32 33 
# 序号	26	节点类型	运算		操作符	==		child:	27 28 
# 序号	27	节点类型	变量名	a				child:	
# 序号	28	节点类型	常量		int10	10		child:	
# 序号	29	节点类型	赋值语句					child:	30 31 
# 序号	30	节点类型	变量名	b				child:	
# 序号	31	节点类型	常量		int10	42		child:	
# 序号	32	节点类型	Else语句				child:	
# 序号	33	节点类型	赋值语句					child:	34 35 
# 序号	34	节点类型	变量名	b				child:	
# 序号	35	节点类型	运算		操作符	*		child:	36 37 
# 序号	36	节点类型	变量名	a				child:	
# 序号	37	节点类型	常量		int10	2		child:	
# 序号	38	节点类型	赋值语句					child:	39 40 
# 序号	39	节点类型	变量名	a				child:	
# 序号	40	节点类型	运算		操作符	+		child:	41 42 
# 序号	41	节点类型	变量名	a				child:	
# 序号	42	节点类型	常量		int10	1		child:	
# 序号	43	节点类型	Prinf语句				child:	44 
# 序号	44	节点类型	常量		字符串	"%d\n"		child:	45 
# 序号	45	节点类型	变量名	a				child:	
# 序号	46	节点类型	Prinf语句				child:	47 
# 序号	47	节点类型	常量		字符串	"%d\n"		child:	48 
# 序号	48	节点类型	变量名	b				child:	
# 序号	49	节点类型	Return语句				child:	50 
# 序号	50	节点类型	常量		int10	0		child:	

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


	movl	$0, -4(%ebp)


	movl	$0, -8(%ebp)

.Lwhi00:
	subl	$8, %esp
	movl	-4(%ebp), %eax
	pushl	%eax
	movl	$100, %ebx
	popl	%eax
	addl	$8, %esp
	cmp		%ebx, %eax
	jl		.Lwhi01

	jmp		.Lwhi02
.Lwhi01:
	subl	$8, %esp
	movl	-4(%ebp), %eax
	pushl	%eax
	movl	$5, %ebx
	popl	%eax
	addl	$8, %esp
	cmp		%ebx, %eax
	jne		.Lif11

.Lif10:
	movl	$25, -8(%ebp)

	jmp		.Lif12

.Lif11:
	subl	$8, %esp
	movl	-4(%ebp), %eax
	pushl	%eax
	movl	$10, %ebx
	popl	%eax
	addl	$8, %esp
	cmp		%ebx, %eax
	jne		.Lif01

.Lif00:
	movl	$42, -8(%ebp)

	jmp		.Lif02

.Lif01:
	subl	$8, %esp
	pushl	-4(%ebp)
	pushl	$2
	popl	%eax
	popl	%ebx
	imul	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, -8(%ebp)
	addl	$8, %esp

.Lif02:
.Lif12:
	subl	$8, %esp
	pushl	-4(%ebp)
	pushl	$1
	popl	%eax
	popl	%ebx
	addl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, -4(%ebp)
	addl	$8, %esp

	jmp		.Lwhi00
.Lwhi02:
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

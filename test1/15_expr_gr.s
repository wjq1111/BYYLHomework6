# Start

# 序号	0	节点类型	程序开始					child:	1 4 7 10 13 22 
# 序号	1	节点类型	声明语句					child:	2 3 
# 序号	2	节点类型	数据类型		int			child:	
# 序号	3	节点类型	变量名	a				child:	
# 序号	4	节点类型	声明语句					child:	5 6 
# 序号	5	节点类型	数据类型		int			child:	
# 序号	6	节点类型	变量名	b				child:	
# 序号	7	节点类型	Scanf语句				child:	8 9 
# 序号	8	节点类型	常量		字符串	"%d"		child:	
# 序号	9	节点类型	变量名	&a				child:	
# 序号	10	节点类型	Scanf语句				child:	11 12 
# 序号	11	节点类型	常量		字符串	"%d"		child:	
# 序号	12	节点类型	变量名	&b				child:	
# 序号	13	节点类型	If语句					0child:	14 17 19 20 
# 序号	14	节点类型	运算		操作符	>		child:	15 16 
# 序号	15	节点类型	变量名	a				child:	
# 序号	16	节点类型	变量名	b				child:	
# 序号	17	节点类型	Prinf语句				child:	18 
# 序号	18	节点类型	常量		字符串	"Success\n"		child:	
# 序号	19	节点类型	Else语句				child:	
# 序号	20	节点类型	Prinf语句				child:	21 
# 序号	21	节点类型	常量		字符串	"Failed\n"		child:	
# 序号	22	节点类型	Return语句				child:	23 
# 序号	23	节点类型	常量		int10	0		child:	

	.section .rodata
STR0:
	.string	"Success\n"
STR1:
	.string	"Failed\n"

str0:
	.string	"%d"
str1:
	.string	"%d"

	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp



	subl	$8, %esp
	leal	-4(%ebp), %eax
	pushl	%eax
	subl	$8, %ebp
	pushl	$str0
	call	scanf
	addl	$8, %ebp
	addl	$16, %esp

	subl	$8, %esp
	leal	-8(%ebp), %eax
	pushl	%eax
	subl	$8, %ebp
	pushl	$str0
	call	scanf
	addl	$8, %ebp
	addl	$16, %esp

	subl	$8, %esp
	movl	-4(%ebp), %eax
	pushl	%eax
	movl	-8(%ebp), %ebx
	popl	%eax
	addl	$8, %esp
	cmp		%ebx, %eax
	jle		.Lif01

.Lif00:
	subl	$8, %esp
	subl	$8, %ebp
	pushl	$STR0
	call	printf
	addl	$8, %ebp
	addl	$12, %esp
	jmp		.Lif02

.Lif01:
	subl	$8, %esp
	subl	$8, %ebp
	pushl	$STR1
	call	printf
	addl	$8, %ebp
	addl	$12, %esp
.Lif02:
	popl	%ebp
	movl	$0, %eax
	ret

	.section	.note.GNU-stack,"",@progbits

# Finish

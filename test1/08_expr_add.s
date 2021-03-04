# Start

# 序号	0	节点类型	程序开始					child:	1 4 7 10 13 16 21 24 
# 序号	1	节点类型	声明语句					child:	2 3 
# 序号	2	节点类型	数据类型		int			child:	
# 序号	3	节点类型	变量名	a				child:	
# 序号	4	节点类型	声明语句					child:	5 6 
# 序号	5	节点类型	数据类型		int			child:	
# 序号	6	节点类型	变量名	b				child:	
# 序号	7	节点类型	声明语句					child:	8 9 
# 序号	8	节点类型	数据类型		int			child:	
# 序号	9	节点类型	变量名	c				child:	
# 序号	10	节点类型	Scanf语句				child:	11 12 
# 序号	11	节点类型	常量		字符串	"%d"		child:	
# 序号	12	节点类型	变量名	&a				child:	
# 序号	13	节点类型	Scanf语句				child:	14 15 
# 序号	14	节点类型	常量		字符串	"%d"		child:	
# 序号	15	节点类型	变量名	&b				child:	
# 序号	16	节点类型	赋值语句					child:	17 18 
# 序号	17	节点类型	变量名	c				child:	
# 序号	18	节点类型	运算		操作符	+		child:	19 20 
# 序号	19	节点类型	变量名	a				child:	
# 序号	20	节点类型	变量名	b				child:	
# 序号	21	节点类型	Prinf语句				child:	22 
# 序号	22	节点类型	常量		字符串	"test:%d\n"		child:	23 
# 序号	23	节点类型	变量名	c				child:	
# 序号	24	节点类型	Return语句				child:	25 
# 序号	25	节点类型	常量		int10	0		child:	

	.section .rodata
STR0:
	.string	"test:%d\n"

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




	subl	$12, %esp
	leal	-4(%ebp), %eax
	pushl	%eax
	subl	$12, %ebp
	pushl	$str0
	call	scanf
	addl	$12, %ebp
	addl	$20, %esp

	subl	$12, %esp
	leal	-8(%ebp), %eax
	pushl	%eax
	subl	$12, %ebp
	pushl	$str0
	call	scanf
	addl	$12, %ebp
	addl	$20, %esp

	subl	$12, %esp
	pushl	-4(%ebp)
	pushl	-8(%ebp)
	popl	%eax
	popl	%ebx
	addl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, -12(%ebp)
	addl	$12, %esp

	subl	$12, %esp
	pushl	-12(%ebp)
	subl	$12, %ebp
	pushl	$STR0
	call	printf
	addl	$12, %ebp
	addl	$20, %esp

	popl	%ebp
	movl	$0, %eax
	ret

	.section	.note.GNU-stack,"",@progbits

# Finish

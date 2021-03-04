# Start

# 序号	0	节点类型	程序开始					child:	1 4 7 18 21 
# 序号	1	节点类型	声明语句					child:	2 3 
# 序号	2	节点类型	数据类型		int			child:	
# 序号	3	节点类型	变量名	a				child:	
# 序号	4	节点类型	赋值语句					child:	5 6 
# 序号	5	节点类型	变量名	a				child:	
# 序号	6	节点类型	常量		int10	10		child:	
# 序号	7	节点类型	If语句					0child:	8 11 14 15 
# 序号	8	节点类型	运算		操作符	>		child:	9 10 
# 序号	9	节点类型	变量名	a				child:	
# 序号	10	节点类型	常量		int10	9		child:	
# 序号	11	节点类型	运算		操作符	-=		child:	12 13 
# 序号	12	节点类型	变量名	a				child:	
# 序号	13	节点类型	常量		int10	20		child:	
# 序号	14	节点类型	Else语句				child:	
# 序号	15	节点类型	运算		操作符	+=		child:	16 17 
# 序号	16	节点类型	变量名	a				child:	
# 序号	17	节点类型	常量		int10	15		child:	
# 序号	18	节点类型	Prinf语句				child:	19 
# 序号	19	节点类型	常量		字符串	"test:%d\n"		child:	20 
# 序号	20	节点类型	变量名	a				child:	
# 序号	21	节点类型	Return语句				child:	22 
# 序号	22	节点类型	常量		int10	0		child:	

	.section .rodata
STR0:
	.string	"test:%d\n"


	.text
	.globl	main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp


	movl	$10, -4(%ebp)

	subl	$4, %esp
	movl	-4(%ebp), %eax
	pushl	%eax
	movl	$9, %ebx
	popl	%eax
	addl	$4, %esp
	cmp		%ebx, %eax
	jle		.Lif01

.Lif00:
	subl	$4, %esp
	movl	-4(%ebp), %eax
	pushl	%eax
	movl	$20, %eax
	popl	%ebx
	subl	%eax, %ebx
	movl	%ebx, -4(%ebp)
	addl	$4, %esp

	jmp		.Lif02

.Lif01:
	subl	$4, %esp
	movl	-4(%ebp), %eax
	pushl	%eax
	movl	$15, %eax
	popl	%ebx
	addl	%eax, %ebx
	movl	%ebx, -4(%ebp)
	addl	$4, %esp

.Lif02:
	subl	$4, %esp
	pushl	-4(%ebp)
	subl	$4, %ebp
	pushl	$STR0
	call	printf
	addl	$4, %ebp
	addl	$12, %esp

	popl	%ebp
	movl	$0, %eax
	ret

	.section	.note.GNU-stack,"",@progbits

# Finish

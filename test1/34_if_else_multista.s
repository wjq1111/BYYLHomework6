# Start

# 序号	0	节点类型	程序开始					child:	1 5 28 31 
# 序号	1	节点类型	声明语句					child:	2 3 
# 序号	2	节点类型	数据类型		int			child:	
# 序号	3	节点类型	变量名	a				child:	4 
# 序号	4	节点类型	常量		int10	10		child:	
# 序号	5	节点类型	If语句					0child:	6 9 14 19 20 23 
# 序号	6	节点类型	运算		操作符	>		child:	7 8 
# 序号	7	节点类型	变量名	a				child:	
# 序号	8	节点类型	常量		int10	9		child:	
# 序号	9	节点类型	赋值语句					child:	10 11 
# 序号	10	节点类型	变量名	a				child:	
# 序号	11	节点类型	运算		操作符	-		child:	12 13 
# 序号	12	节点类型	变量名	a				child:	
# 序号	13	节点类型	常量		int10	10		child:	
# 序号	14	节点类型	赋值语句					child:	15 16 
# 序号	15	节点类型	变量名	a				child:	
# 序号	16	节点类型	运算		操作符	%		child:	17 18 
# 序号	17	节点类型	变量名	a				child:	
# 序号	18	节点类型	常量		int10	6		child:	
# 序号	19	节点类型	Else语句				child:	
# 序号	20	节点类型	赋值语句					child:	21 22 
# 序号	21	节点类型	变量名	a				child:	
# 序号	22	节点类型	常量		int10	2		child:	
# 序号	23	节点类型	赋值语句					child:	24 25 
# 序号	24	节点类型	变量名	a				child:	
# 序号	25	节点类型	运算		操作符	-		child:	26 27 
# 序号	26	节点类型	变量名	a				child:	
# 序号	27	节点类型	常量		int10	30		child:	
# 序号	28	节点类型	Prinf语句				child:	29 
# 序号	29	节点类型	常量		字符串	"Test:%d\n"		child:	30 
# 序号	30	节点类型	变量名	a				child:	
# 序号	31	节点类型	Return语句				child:	32 
# 序号	32	节点类型	常量		int10	0		child:	

	.section .rodata
STR0:
	.string	"Test:%d\n"


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
	pushl	-4(%ebp)
	pushl	$10
	popl	%eax
	popl	%ebx
	subl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, -4(%ebp)
	addl	$4, %esp

	subl	$4, %esp
	pushl	-4(%ebp)
	pushl	$6
	popl	%ebx
	popl	%eax
	cltd
	idiv	%ebx
	movl	%edx, %eax
	movl	%eax, -4(%ebp)
	addl	$4, %esp

	jmp		.Lif02

.Lif01:
	movl	$2, -4(%ebp)

	subl	$4, %esp
	pushl	-4(%ebp)
	pushl	$30
	popl	%eax
	popl	%ebx
	subl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, -4(%ebp)
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

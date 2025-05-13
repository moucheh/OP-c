	.file	"main.c"
	.text
	.section	.rodata
.LC0:
	.string	"main.c"
.LC1:
	.string	"size > 0"
.LC2:
	.string	"array!=NULL"
	.text
	.globl	maxNum
	.type	maxNum, @function
maxNum:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	cmpl	$0, -28(%rbp)
	jg	.L2
	leaq	__PRETTY_FUNCTION__.2265(%rip), %rcx
	movl	$4, %edx
	leaq	.LC0(%rip), %rsi
	leaq	.LC1(%rip), %rdi
	call	__assert_fail@PLT
.L2:
	cmpq	$0, -24(%rbp)
	jne	.L3
	leaq	__PRETTY_FUNCTION__.2265(%rip), %rcx
	movl	$5, %edx
	leaq	.LC0(%rip), %rsi
	leaq	.LC2(%rip), %rdi
	call	__assert_fail@PLT
.L3:
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, -8(%rbp)
	movl	$1, -4(%rbp)
	jmp	.L4
.L6:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -8(%rbp)
	jge	.L5
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -8(%rbp)
.L5:
	addl	$1, -4(%rbp)
.L4:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L6
	movl	-8(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	maxNum, .-maxNum
	.section	.rodata
.LC3:
	.string	"Max num: %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$144, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$7, -132(%rbp)
	leaq	-128(%rbp), %rdx
	movl	$0, %eax
	movl	$15, %ecx
	movq	%rdx, %rdi
	rep stosq
	movl	$4, -128(%rbp)
	movl	$7, -124(%rbp)
	movl	$2, -120(%rbp)
	movl	$11, -116(%rbp)
	movl	$9, -112(%rbp)
	movl	$3, -108(%rbp)
	movl	$8, -104(%rbp)
	movl	-132(%rbp), %edx
	leaq	-128(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	maxNum
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L10
	call	__stack_chk_fail@PLT
.L10:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.section	.rodata
	.type	__PRETTY_FUNCTION__.2265, @object
	.size	__PRETTY_FUNCTION__.2265, 7
__PRETTY_FUNCTION__.2265:
	.string	"maxNum"
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits

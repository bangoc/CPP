	.file	"virtual.cc"
	.section	.text._ZN1A3FooEv,"axG",@progbits,_ZN1A3FooEv,comdat
	.align 2
	.weak	_ZN1A3FooEv
	.type	_ZN1A3FooEv, @function
_ZN1A3FooEv:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_ZN1A3FooEv, .-_ZN1A3FooEv
	.section	.text._ZN1AD2Ev,"axG",@progbits,_ZN1AD5Ev,comdat
	.align 2
	.weak	_ZN1AD2Ev
	.type	_ZN1AD2Ev, @function
_ZN1AD2Ev:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$_ZTV1A+16, %edx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movl	$0, %eax
	testl	%eax, %eax
	je	.L2
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
.L2:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	_ZN1AD2Ev, .-_ZN1AD2Ev
	.weak	_ZN1AD1Ev
	.set	_ZN1AD1Ev,_ZN1AD2Ev
	.section	.text._ZN1AD0Ev,"axG",@progbits,_ZN1AD5Ev,comdat
	.align 2
	.weak	_ZN1AD0Ev
	.type	_ZN1AD0Ev, @function
_ZN1AD0Ev:
.LFB4:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1AD1Ev
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	_ZN1AD0Ev, .-_ZN1AD0Ev
	.section	.text._ZN1B3FooEv,"axG",@progbits,_ZN1B3FooEv,comdat
	.align 2
	.weak	_ZN1B3FooEv
	.type	_ZN1B3FooEv, @function
_ZN1B3FooEv:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	_ZN1B3FooEv, .-_ZN1B3FooEv
	.section	.text._ZN1B4Foo2Ev,"axG",@progbits,_ZN1B4Foo2Ev,comdat
	.align 2
	.weak	_ZN1B4Foo2Ev
	.type	_ZN1B4Foo2Ev, @function
_ZN1B4Foo2Ev:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	_ZN1B4Foo2Ev, .-_ZN1B4Foo2Ev
	.section	.text._ZN1BD2Ev,"axG",@progbits,_ZN1BD5Ev,comdat
	.align 2
	.weak	_ZN1BD2Ev
	.type	_ZN1BD2Ev, @function
_ZN1BD2Ev:
.LFB8:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$_ZTV1B+16, %edx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1AD2Ev
	movl	$0, %eax
	testl	%eax, %eax
	je	.L7
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	_ZN1BD2Ev, .-_ZN1BD2Ev
	.weak	_ZN1BD1Ev
	.set	_ZN1BD1Ev,_ZN1BD2Ev
	.section	.text._ZN1BD0Ev,"axG",@progbits,_ZN1BD5Ev,comdat
	.align 2
	.weak	_ZN1BD0Ev
	.type	_ZN1BD0Ev, @function
_ZN1BD0Ev:
.LFB10:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1BD1Ev
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	_ZN1BD0Ev, .-_ZN1BD0Ev
	.section	.text._ZN1C4Foo2Ev,"axG",@progbits,_ZN1C4Foo2Ev,comdat
	.align 2
	.weak	_ZN1C4Foo2Ev
	.type	_ZN1C4Foo2Ev, @function
_ZN1C4Foo2Ev:
.LFB11:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	_ZN1C4Foo2Ev, .-_ZN1C4Foo2Ev
	.section	.text._ZN1CD2Ev,"axG",@progbits,_ZN1CD5Ev,comdat
	.align 2
	.weak	_ZN1CD2Ev
	.type	_ZN1CD2Ev, @function
_ZN1CD2Ev:
.LFB13:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$_ZTV1C+16, %edx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1BD2Ev
	movl	$0, %eax
	testl	%eax, %eax
	je	.L11
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	_ZN1CD2Ev, .-_ZN1CD2Ev
	.weak	_ZN1CD1Ev
	.set	_ZN1CD1Ev,_ZN1CD2Ev
	.section	.text._ZN1CD0Ev,"axG",@progbits,_ZN1CD5Ev,comdat
	.align 2
	.weak	_ZN1CD0Ev
	.type	_ZN1CD0Ev, @function
_ZN1CD0Ev:
.LFB15:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1CD1Ev
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	_ZN1CD0Ev, .-_ZN1CD0Ev
	.section	.text._ZN1AC2Ev,"axG",@progbits,_ZN1AC5Ev,comdat
	.align 2
	.weak	_ZN1AC2Ev
	.type	_ZN1AC2Ev, @function
_ZN1AC2Ev:
.LFB19:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$_ZTV1A+16, %edx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	_ZN1AC2Ev, .-_ZN1AC2Ev
	.weak	_ZN1AC1Ev
	.set	_ZN1AC1Ev,_ZN1AC2Ev
	.section	.text._ZN1BC2Ev,"axG",@progbits,_ZN1BC5Ev,comdat
	.align 2
	.weak	_ZN1BC2Ev
	.type	_ZN1BC2Ev, @function
_ZN1BC2Ev:
.LFB21:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1AC2Ev
	movl	$_ZTV1B+16, %edx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE21:
	.size	_ZN1BC2Ev, .-_ZN1BC2Ev
	.weak	_ZN1BC1Ev
	.set	_ZN1BC1Ev,_ZN1BC2Ev
	.section	.text._ZN1CC2Ev,"axG",@progbits,_ZN1CC5Ev,comdat
	.align 2
	.weak	_ZN1CC2Ev
	.type	_ZN1CC2Ev, @function
_ZN1CC2Ev:
.LFB24:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1BC2Ev
	movl	$_ZTV1C+16, %edx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE24:
	.size	_ZN1CC2Ev, .-_ZN1CC2Ev
	.weak	_ZN1CC1Ev
	.set	_ZN1CC1Ev,_ZN1CC2Ev
	.text
	.globl	main
	.type	main, @function
main:
.LFB16:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1BC1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1AC1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1CC1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, -16(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, -8(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1CD1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1AD1Ev
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1BD1Ev
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	main, .-main
	.weak	_ZTV1C
	.section	.rodata._ZTV1C,"aG",@progbits,_ZTV1C,comdat
	.align 8
	.type	_ZTV1C, @object
	.size	_ZTV1C, 48
_ZTV1C:
	.quad	0
	.quad	_ZTI1C
	.quad	_ZN1B3FooEv
	.quad	_ZN1CD1Ev
	.quad	_ZN1CD0Ev
	.quad	_ZN1C4Foo2Ev
	.weak	_ZTV1B
	.section	.rodata._ZTV1B,"aG",@progbits,_ZTV1B,comdat
	.align 8
	.type	_ZTV1B, @object
	.size	_ZTV1B, 48
_ZTV1B:
	.quad	0
	.quad	_ZTI1B
	.quad	_ZN1B3FooEv
	.quad	_ZN1BD1Ev
	.quad	_ZN1BD0Ev
	.quad	_ZN1B4Foo2Ev
	.weak	_ZTV1A
	.section	.rodata._ZTV1A,"aG",@progbits,_ZTV1A,comdat
	.align 8
	.type	_ZTV1A, @object
	.size	_ZTV1A, 40
_ZTV1A:
	.quad	0
	.quad	_ZTI1A
	.quad	_ZN1A3FooEv
	.quad	_ZN1AD1Ev
	.quad	_ZN1AD0Ev
	.weak	_ZTI1C
	.section	.rodata._ZTI1C,"aG",@progbits,_ZTI1C,comdat
	.align 8
	.type	_ZTI1C, @object
	.size	_ZTI1C, 24
_ZTI1C:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS1C
	.quad	_ZTI1B
	.weak	_ZTS1C
	.section	.rodata._ZTS1C,"aG",@progbits,_ZTS1C,comdat
	.type	_ZTS1C, @object
	.size	_ZTS1C, 3
_ZTS1C:
	.string	"1C"
	.weak	_ZTI1B
	.section	.rodata._ZTI1B,"aG",@progbits,_ZTI1B,comdat
	.align 8
	.type	_ZTI1B, @object
	.size	_ZTI1B, 24
_ZTI1B:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS1B
	.quad	_ZTI1A
	.weak	_ZTS1B
	.section	.rodata._ZTS1B,"aG",@progbits,_ZTS1B,comdat
	.type	_ZTS1B, @object
	.size	_ZTS1B, 3
_ZTS1B:
	.string	"1B"
	.weak	_ZTI1A
	.section	.rodata._ZTI1A,"aG",@progbits,_ZTI1A,comdat
	.align 8
	.type	_ZTI1A, @object
	.size	_ZTI1A, 16
_ZTI1A:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS1A
	.weak	_ZTS1A
	.section	.rodata._ZTS1A,"aG",@progbits,_ZTS1A,comdat
	.type	_ZTS1A, @object
	.size	_ZTS1A, 3
_ZTS1A:
	.string	"1A"
	.ident	"GCC: (Ubuntu 5.4.1-2ubuntu1~14.04) 5.4.1 20160904"
	.section	.note.GNU-stack,"",@progbits

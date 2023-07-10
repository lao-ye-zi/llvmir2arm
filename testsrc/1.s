	.text                 @ -- Begin function func
	.p2align	2
	.type	func,%function
	.code	32                      @ @func
func:
	.fnstart
@ %bb.0:                                @ %label_entry
	sub	sp, sp, #8
	str	r0, [sp, #4]
	ldr	r0, [sp, #4]
	sub	r0, r0, #1
	str	r0, [sp, #4]
	ldr	r0, [sp, #4]
	str	r0, [sp]
	b	.LBB0_1
.LBB0_1:                                @ %label_ret
	ldr	r0, [sp]
	add	sp, sp, #8
	mov	pc, lr
.Lfunc_end0:
	.size	func, .Lfunc_end0-func
	.fnend
                                        @ -- End function
	.globl	main                    @ -- Begin function main
	.p2align	2
	.type	main,%function
	.code	32                      @ @main
main:
	.fnstart
@ %bb.0:                                @ %label_entry
	push	{r11, lr}
	sub	sp, sp, #8
	ldr	r0, .LCPI1_0
	mov	r1, #10
	str	r1, [r0]
	ldr	r0, [r0]
	bl	func
	str	r0, [sp]
	ldr	r0, [sp]
	str	r0, [sp, #4]
	b	.LBB1_1
.LBB1_1:                                @ %label_ret
	ldr	r0, [sp, #4]
	add	sp, sp, #8
	pop	{r11, lr}
	mov	pc, lr
	.p2align	2
@ %bb.2:
.LCPI1_0:
	.long	a
.Lfunc_end1:
	.size	main, .Lfunc_end1-main
	.fnend
                                        @ -- End function
	.type	a,%object               @ @a
	.bss
	.globl	a
	.p2align	2
a:
	.long	0                       @ 0x0
	.size	a, 4

	.section	".note.GNU-stack","",%progbits

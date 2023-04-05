.text			# Define beginning of text section
.global	_start		# Define entry _start

_start:
	li	gp, 24				
    	lui	ra, 0xff010				
	addi	ra, ra, -256		
	and	sp,zero,ra
	li	t2,0
	bne	sp, t2, _fail

	lui	t1, 0x200
	addi	t1, t1, 8
	sw	t0, 0(t1)
_fail:  
    li x8, 1
    li x9, 2
    lui   t1, 0x200
    addi  t1, t1, 8
    sw    t0, 0(t1)
_end:
    lui   t1, 0x200
    addi  t1, t1, 8
    sw    t0, 0(t1)
.end			# End of file

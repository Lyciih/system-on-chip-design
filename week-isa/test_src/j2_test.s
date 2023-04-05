.text			# Define beginning of text section
.global	_start		# Define entry _start

_start:
	li x3, 1				
    	li x2, 2				
	bne x2, x3, _fail		
	li x10, 1
	li x11, 3

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

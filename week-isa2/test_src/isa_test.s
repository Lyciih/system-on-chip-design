.text			# Define beginning of text section
.global	_start		# Define entry _start

_start:
    lui   t1, 0x200
    addi  t1, t1, 8
    sw	  t0, 0(t1)
.end

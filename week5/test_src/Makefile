CROSS_COMPILE = riscv64-unknown-elf-
CFLAGS = -nostdlib -fno-builtin -march=rv32ima -mabi=ilp32 -g -Wall
CC = ${CROSS_COMPILE}gcc
OBJCOPY = ${CROSS_COMPILE}objcopy
OBJDUMP = ${CROSS_COMPILE}objdump

.DEFAULT_GOAL := all
all:
	@${CC} ${CFLAGS} i_test.s -Ttext=0x00000000 -o i_test.elf
	@${OBJCOPY} -O	binary i_test.elf i_test.bin
	@${CC} ${CFLAGS} r_test.s -Ttext=0x00000000 -o r_test.elf
	@${OBJCOPY} -O	binary r_test.elf r_test.bin
	@${CC} ${CFLAGS} u_test.s -Ttext=0x00000000 -o u_test.elf
	@${OBJCOPY} -O	binary u_test.elf u_test.bin

.PHONY: code
code: all
	@${OBJDUMP} -S i_test.elf | less
	@${OBJDUMP} -S r_test.elf | less
	@${OBJDUMP} -S u_test.elf | less

.PHONY: hex
hex: all
	@hexdump -C i_test.bin
	@hexdump -C r_test.bin
	@hexdump -C u_test.bin

.PHONY: clean
clean:
	rm -rf *.o *.bin *.elf

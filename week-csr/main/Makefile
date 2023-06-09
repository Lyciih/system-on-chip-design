CROSS_COMPILE = riscv64-unknown-elf-
CFLAGS = -nostdlib -fno-builtin -march=rv32im -mabi=ilp32 -g -Wall -ffreestanding
CC = ${CROSS_COMPILE}gcc
OBJCOPY = ${CROSS_COMPILE}objcopy
OBJDUMP = ${CROSS_COMPILE}objdump


#startup
SRCS_ASM += $(wildcard ./util/boot.s)
INC += -I./util

#util
SRCS_C += $(wildcard ./util/*.c)

OBJS = $(patsubst %.s, objs/%.o, $(notdir ${SRCS_ASM}))
OBJS += $(patsubst %.c, objs/%.o, $(notdir ${SRCS_C}))

.DEFAULT_GOAL := all
all: test.elf


# start.o must be the first in dependency!
test.elf: ${OBJS}
	${CC} ${CFLAGS} -T link.ld -o test.elf $^
	${OBJCOPY} -O binary test.elf test.bin

objs/%.o : ${SRCS_ASM} ${SRCS_C}
	${CC} ${CFLAGS} ${INC} -c $(filter %/$(*F).c,$^) $(filter %/$(*F).s,$^) -o $@


.PHONY : code
code: all
	@${OBJDUMP} -S test.elf | less

.PHONY : hex
hex: all
	@hexdump -C test.bin

.PHONY : clean
clean:
	rm -rf ./objs/*.o *.bin *.elf

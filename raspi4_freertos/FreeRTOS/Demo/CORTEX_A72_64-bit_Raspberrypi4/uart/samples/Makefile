# clean, bare-metal Makefile for sample.c
CC      = aarch64-none-elf-gcc
CFLAGS  = -Wall -Wextra -O2 -ffreestanding -nostdlib -nostartfiles -mcpu=cortex-a72
LDFLAGS = -T ../src/raspberrypi4.ld -nostdlib -Wl,-e,main
SRC     = sample.c
OBJ     = build/sample.o
OUT     = build/sample.elf

all: $(OUT)

build:
	mkdir -p build

$(OBJ): $(SRC) | build
	$(CC) $(CFLAGS) -c $(SRC) -o $(OBJ)

$(OUT): $(OBJ)
	$(CC) $(LDFLAGS) -o $(OUT) $(OBJ)

clean:
	rm -rf build


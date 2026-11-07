CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -Iinclude/Assembler -Iinclude/Stages
TARGET = emulator.out
TARGET2 = Assembler.out

EMULATOR_SRC = src/Main.c \
 src/CPU.c \
 src/CPU_Memory.c \
 src/Pipeline.c \
 src/Stages/Fetch.c \
 src/Stages/Decode.c \
 src/Stages/Execute.c \
 src/Stages/Memory_Stage.c \
 src/Stages/WriteBack.c

 ASSEMBLER_SRC = src/Assembler/Assemble.c \
 src/Assembler/Label.c \
 src/Assembler/Assembler.c \

Emulator:
	$(CC) $(CFLAGS) $(EMULATOR_SRC) -o $(TARGET)
	./$(TARGET) Program.bin

Assembler:
	$(CC) $(CFLAGS) $(ASSEMBLER_SRC) -o $(TARGET2)
	./$(TARGET2) Program.asm

run: all
	./$(TARGET) Program.bin

clean: cleanEm cleanAs

cleanEm:
	rm -f $(TARGET)
	rm -f Program.bin

cleanAs:
	rm -f $(TARGET2)
CC = gcc
CFLAGS = -Wall -Wextra -ISim/include -IAssem/include -ISim/include/Stages
TARGET = Simulator.out
TARGET2 = Assembler.out

EMULATOR_SRC = Sim/src/Main.c \
 Sim/src/CPU.c \
 Sim/src/CPU_Memory.c \
 Sim/src/Pipeline.c \
 Sim/src/Stages/Fetch.c \
 Sim/src/Stages/Decode.c \
 Sim/src/Stages/Execute.c \
 Sim/src/Stages/Memory_Stage.c \
 Sim/src/Stages/WriteBack.c

ASSEMBLER_SRC = Assem/src/Assembler.c \
 Assem/src/Assemble.c \
 Assem/src/Label.c

Simulator:
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
CC = gcc
CFLAGS = -Wall -Wextra -ISimulator_C/include -IAssembler_C/include -ISimulator_C/include/Stages
TARGET = Simulator.out
TARGET2 = Assembler.out

EMULATOR_SRC = Simulator_C/src/Main.c \
 Simulator_C/src/CPU.c \
 Simulator_C/src/CPU_Memory.c \
 Simulator_C/src/Pipeline.c \
 Simulator_C/src/Stages/Fetch.c \
 Simulator_C/src/Stages/Decode.c \
 Simulator_C/src/Stages/Execute.c \
 Simulator_C/src/Stages/Memory_Stage.c \
 Simulator_C/src/Stages/WriteBack.c

ASSEMBLER_SRC = Assembler_C/src/Assembler.c \
 Assembler_C/src/Assemble.c \
 Assembler_C/src/Label.c

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
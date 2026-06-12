CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
TARGET = emulator.out

SRC = src/Main.c \
 src/CPU.c \
 src/CPU_Memory.c \
 src/Pipeline.c \
 src/Fetch.c \
 src/Decode.c \
 src/Execute.c \
 src/Memory_Stage.c \
 src/WriteBack.c

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)

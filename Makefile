CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
TARGET = emulator

SRC = src/Main.c src/CPU.c src/CPU_Memory.c

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)

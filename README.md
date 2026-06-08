# Issac-32 CPU Emulator

A small educational CPU emulator and assembler for the custom "Issac-32" 32-bit instruction set (see `ISA.txt`).

This repository contains a simple fetch-decode-execute emulator written in C and a tiny assembler that converts human-readable assembly into a binary `Program.bin` the emulator can load.

**Overview**

- Emulator: reads a binary file of 32-bit instructions and loads it into memory, then (intended to) execute per the Issac-32 ISA.
- Assembler: reads an assembly text file and writes `Program.bin` (32-bit little-endian instructions).

**Repository Structure**

- `ISA.txt`: instruction set specification for Issac-32.
- `Makefile`: builds the emulator (`emulator`) from `src/`.
- `Assembler/`: assembler source and `Makefile` (builds `assembler`).
- `include/`: public headers (`CPU.h`, `CPU_Memory.h`, `Decode.h`, ...).
- `src/`: emulator implementation (`Main.c`, `CPU.c`, `CPU_Memory.c`, `Fetch.c`, `Decode.c`, `Execute.c`, `Pipeline.c`).

**Prerequisites**

- POSIX-compatible shell (macOS/Linux) with `gcc` and `make` installed.

**Build**
From the repository root build the emulator:

```sh
make
```

Build the assembler (from repo root):

```sh
make -C Assembler
```

**Assemble an assembly file**
Place your assembly source (for example `Program.asm`) in `Assembler/` or pass a path to the assembler. The assembler writes `Program.bin` in the current working directory.

```sh
cd Assembler
./assembler Program.asm   # produces Program.bin
```

Or from repo root:

```sh
Assembler/assembler Assembler/Program.asm
```

**Run the emulator**
The emulator expects a binary file containing 32-bit little-endian instructions. Example:

```sh
./emulator Assembler/Program.bin
```

If you built in a separate directory, adjust the paths accordingly.

**Cleaning**

```sh
make clean
make -C Assembler clean
```

**Notes & Implementation details**

- The emulator's entrypoint is `src/Main.c`. It allocates memory (`MAX_MEMORY_SIZE` words) and calls `loadProgram()` to read the binary into memory.
- The assembler is implemented in `Assembler/Main.c` and emits 32-bit words into `Program.bin` using `fwrite`.
- Programs are read by `src/CPU_Memory.c::loadProgram()` using `fread` as `uint32_t` words; ensure your assembler outputs words in the same endianness as the target machine (little-endian expected).
- See `ISA.txt` for the full Issac-32 opcode map and semantics.

**Examples**

- Minimal assembly (see `ISA.txt` for syntax examples):

```asm
MOVI r1, 5
MOVI r2, 7
ADD r3, r1, r2
HALT
```

Assemble and run:

```sh
make -C Assembler
Assembler/assembler Assembler/Program.asm
./emulator Assembler/Program.bin
```

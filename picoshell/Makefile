# Makefile for SPL01 Pico Shell

# Compiler
CC = gcc

# Compiler Flags
CFLAGS = -Wall -Wextra -pedantic

# Executables
EXECUTABLES = picoshell

# Default Target
all: $(EXECUTABLES)

# Compile individual programs
picoshell: picoshell.c
	$(CC) $(CFLAGS) -o picoshell picoshell.c

# Clean up compiled binaries
clean:
	rm -f $(EXECUTABLES)
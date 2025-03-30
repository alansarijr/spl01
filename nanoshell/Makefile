# Makefile for SPL01 Nano Shell

# Compiler
CC = gcc

# Compiler Flags
CFLAGS = -Wall -Wextra -pedantic

# Executables
EXECUTABLES = nanoshell

# Default Target
all: $(EXECUTABLES)

# Compile individual programs
nanoshell: nanoshell.c
	$(CC) $(CFLAGS) -o nanoshell nanoshell.c

# Clean up compiled binaries
clean:
	rm -f $(EXECUTABLES)
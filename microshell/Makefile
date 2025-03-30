# Makefile for SPL01 Micro Shell

# Compiler
CC = gcc

# Compiler Flags
CFLAGS = -Wall -Wextra -pedantic

# Executables
EXECUTABLES = microshell

# Default Target
all: $(EXECUTABLES)

# Compile individual programs
microshell: microshell.c
	$(CC) $(CFLAGS) -o microshell microshell.c

# Clean up compiled binaries
clean:
	rm -f $(EXECUTABLES)
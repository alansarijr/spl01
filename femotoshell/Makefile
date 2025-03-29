# Makefile for SPL01 Linux Utilities

# Compiler
CC = gcc

# Compiler Flags
CFLAGS = -Wall -Wextra -pedantic

# Executables
EXECUTABLES = femtoshell

# Default Target
all: $(EXECUTABLES)

# Compile individual programs
femtoshell: femtoshell.c
	$(CC) $(CFLAGS) -o femtoshell femtoshell.c

# Clean up compiled binaries
clean:
	rm -f $(EXECUTABLES)
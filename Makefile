# Makefile for SPL01 Linux Utilities

# Compiler
CC = gcc

# Compiler Flags
CFLAGS = -Wall -Wextra -pedantic

# Executables
EXECUTABLES = mymv mycp myecho mypwd

# Default Target
all: $(EXECUTABLES)

# Compile individual programs
mymv: mymv.c
	$(CC) $(CFLAGS) -o mymv mymv.c

mycp: mycp.c
	$(CC) $(CFLAGS) -o mycp mycp.c

myecho: myecho.c
	$(CC) $(CFLAGS) -o myecho myecho.c

mypwd: mypwd.c
	$(CC) $(CFLAGS) -o mypwd mypwd.c

# Clean up compiled binaries
clean:
	rm -f $(EXECUTABLES)
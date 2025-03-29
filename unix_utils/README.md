# SPL01 - Linux Utilities

Minimal implementations of essential Linux command-line utilities in C, developed as part of the SPL01 course.

## Implemented Utilities

| Utility  | Functionality           | Source Code |
|----------|-------------------------|-------------|
| `mymv`   | Moves/Renames files      | [mymv.c](./mymv.c) |
| `mycp`   | Copies files             | [mycp.c](./mycp.c) |
| `myecho` | Prints arguments         | [myecho.c](./myecho.c) |
| `mypwd`  | Displays current directory | [mypwd.c](./mypwd.c) |

## Building & Running

### Prerequisites
- GCC compiler

### Compilation with Makefile
```bash
# Clone repository
git clone https://github.com/alansarijr/spl01
cd spl01/unix_utils

# Build all utilities
make

# Build a specific utility
make mymv
make mycp
make myecho
make mypwd

# Clean compiled files
make clean
```

## Usage Guide

### `mymv`
```bash
# Rename a file
./mymv oldname.txt newname.txt

# Move file to a different directory
./mymv file.txt ~/Documents/
```

### `mycp`
```bash
# Copy a file in the same directory
./mycp source.txt backup.txt

# Copy to another directory
./mycp image.jpg /var/www/uploads/
```

### `myecho`
```bash
# Print a message
./myecho "Hello, World!"

# Print multiple arguments
./myecho "CPU Cores:" $(grep -c processor /proc/cpuinfo)

# Print without newline
./myecho -n "Loading..."
```

### `mypwd`
```bash
# Show current directory
./mypwd
```

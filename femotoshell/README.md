# SPL01 - Femto Shell

Femto Shell (femtoshell) is a simple command-line shell implementation written in C as part of the System Programming course. It provides basic command execution functionality, including an echo command and an exit command.

## **Features**  
- Displays a custom shell prompt (`mosh >`).  
- Accepts and processes user input.  
- Implements a basic `echo` command.  
- Supports `exit` to quit the shell.  
- Handles invalid commands gracefully.  


## Building & Running

### Prerequisites
- GCC compiler

### Compilation with Makefile
```bash
# Clone repository
git clone https://github.com/alansarijr/spl01
cd spl01/femtoshell

# Build all
make

# Build the shell only
make femtoshell

# Clean compiled files
make clean
```

## Usage Guide

### `femtoshell`
```bash
# Rename a file
./femtoshell
mosh > ...
```

# SPL01 - Nano Shell

Pico Shell (nanoshell) is a simple command-line shell implementation written in C as part of the System Programming course. It provides basic command execution functionality, including an echo command and an exit command also using exec sys call to call other commands that not implemented.

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
git clone https://github.com/alansarijr/spl01.git
cd spl01/nanoshell

# Build all
make

# Build the shell only
make nanoshell

# Clean compiled files
make clean
```

## Usage Guide

### `nanoshell`
```bash
# Rename a file
./nanoshell
mosh > ...
```

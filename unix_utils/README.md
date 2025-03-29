# SPL01

## 📌 Introduction
This repository is part of the SPL01 course and includes my own implementations of basic Linux utilities using C. These programs replicate the functionality of commonly used commands, providing insight into Linux system programming. The implemented commands include:

- **`mymv`** → Move/Rename files
- **`mycp`** → Copy files
- **`myecho`** → Print text to stdout
- **`mypwd`** → Print working directory

Each program is compiled using `gcc` and follows a structured execution format.

---

## 🔹 1. mymv (Move/Rename Files)

### 📖 **Overview**
The `mymv` command moves or renames a file from one location to another using the `rename()` system call.

### 🛠 **Compilation & Usage**
```sh
gcc -o mymv mymv.c
./mymv <source_file> <destination_file>
```

### ✅ **Expected Output**
```sh
File moved successfully!
```
If an error occurs (e.g., file not found), an appropriate error message is displayed.

---

## 🔹 2. mycp (Copy Files)

### 📖 **Overview**
The `mycp` command copies a file from a source to a destination using `open()`, `read()`, and `write()` system calls.

### 🛠 **Compilation & Usage**
```sh
gcc -o mycp mycp.c
./mycp source.txt destination.txt
```

### ✅ **Expected Output**
```sh
File copied successfully!
```
If an error occurs (e.g., file not found), an appropriate error message is displayed.

---

## 🔹 3. myecho (Print Text to Standard Output)

### 📖 **Overview**
The `myecho` command prints the given input text to the standard output.

### 🛠 **Compilation & Usage**
```sh
gcc -o myecho myecho.c
./myecho Hello, World!
```

### ✅ **Expected Output**
```sh
Hello, World!
```

---

## 🔹 4. mypwd (Print Working Directory)

### 📖 **Overview**
The `mypwd` command prints the current working directory using the `getcwd()` system call.

### 🛠 **Compilation & Usage**
```sh
gcc -o mypwd mypwd.c
./mypwd
```

### ✅ **Expected Output**
```sh
/home/user/project
```

---


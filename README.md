# 🖥️ CPP01 - 1337 Project

[![1337 Badge](https://img.shields.io/badge/1337-Project-blue)](https://www.42network.org/)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen) ![Grade](https://img.shields.io/badge/Grade-0%2F80-progress)

### Memory allocation, pointers to members, and references

---

## 📜 Project Overview

This project builds on the fundamentals of C++, focusing on memory allocation, pointers, and references. The exercises are designed to help you understand how to manage memory on both the stack and the heap, as well as the important differences between using pointers and references in C++.

> ⚠️ All code must follow the **C++98 standard**.

---

## 🚀 Features

### ✅ Mandatory Part

  * **Exercise 00: BraiiiiiiinnnzzzZ**: Implement a `Zombie` class and two functions: one that creates a zombie on the heap and returns it, and another that creates a zombie on the stack. The main purpose is to highlight the difference in memory allocation.
  * **Exercise 01: Moar brainz\!**: Create a function `zombieHorde` that allocates `N` `Zombie` objects in a single allocation and returns a pointer to the first one. You must properly deallocate the memory to check for leaks.
  * **Exercise 02: HI THIS IS BRAIN**: Write a program that demonstrates the relationship between a `string` variable, a pointer to it, and a reference to it by printing their memory addresses and values.
  * **Exercise 03: Unnecessary violence**: Implement a `Weapon` class and two `Human` classes (`HumanA` and `HumanB`) to understand the use of pointers and references with objects.
  * **Exercise 04: Sed is for losers**: Create a program that reads a file and writes its content to a new file, replacing every occurrence of a given string (`s1`) with another string (`s2`) without using the forbidden `std::string::replace` function.
  * **Exercise 05: Harl 2.0**: Implement a `Harl` class with private member functions for different complaint levels (`debug`, `info`, `warning`, `error`) and a public `complain` function that calls the appropriate private function using **pointers to member functions**.
### ⚠️ Optional Exercise
  * **Exercise 06: Harl filter**: Create a program that filters Harl's complaints based on a command-line argument using a `switch` statement.
  * Completing this exercise is **optional** for passing the module.

-----

## 🛠️ Installation & Compilation

To compile any of the exercises, navigate to the corresponding directory and run `make`. The `Makefile` provided will compile the source files to the required executable name.

### 📌 Compilation Flags

Your code must be compiled with `c++` and the following flags:

```bash
-Wall -Wextra -Werror -std=c++98
```

The `-std=c++98` flag ensures your code adheres to the C++98 standard.

### 🔧 Cleanup

```bash
make clean      # Removes object files
make fclean     # Removes the executable and object files
make re         # Performs a full rebuild
```

-----

## 📏 Rules

  * **Language Standard**: Your code must follow the C++98 standard.
  * **Forbidden Functions**: The C functions `*printf()`, `*alloc()`, and `free()` are strictly forbidden. Using them will result in a grade of 0.
  * **STL**: The Standard Template Library (STL), including containers like `vector`, `list`, and `map`, is forbidden until Modules 08 and 09.
  * **Memory Management**: All memory allocated with `new` must be properly deallocated with `delete` to avoid memory leaks.
  * **Headers**: All header files must include include guards to prevent double inclusion.
  * **Output**: Every output message must end with a newline character and be displayed to the standard output.

-----

For complete project details, see the subject file:
[en.subject.pdf](https://github.com/Redadaghouj/42-CPP01_1337/blob/main/subject/en.subject.pdf)

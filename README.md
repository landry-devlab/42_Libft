# 42_Libft

Libft: 42 C project for learning standard library functions and memory management

## Overview

`libft` is a foundational static C library developed as part of **Milestone 0** at 42 school, following official admission to the school after successful completion of the Piscine.

The project focuses on reimplementing a selected subset of standard C library functions, along with additional utility functions. The resulting library is designed to serve as a long-term dependency for subsequent C projects.

* Subject : libft subject available in october 2025 - Version 18.--
* Validation date: October 2025 - 42 Vienna
* Final evaluation score: 125 / 100


---

## Purpose and Scope

The objective of this project is to establish a reliable, reusable, and norm-compliant C library that:

* Provides core functionality commonly required in low-level C development
* Encourages disciplined memory management and defensive programming
* Serves as a stable base for more complex systems and applications

---

## Coding Standard and Constraints

This project strictly adheres to the **42 Norme**, which enforces consistency, readability, and maintainability.

Key constraints include:

* Compliance with the official Norme 42
* No usage of forbidden standard library functions
* Maximum of 25 lines per function
* One instruction per line
* Mandatory file headers
* Consistent indentation and naming conventions
* No memory leaks or undefined behavior

All sources are compiled with the following flags:

```bash
-Wall -Wextra -Werror
```

Any deviation from these rules results in non-compliance.

---

## Library Content

Functions are grouped by functional domain.

### Character Classification and Checks

* `ft_isalpha` — Checks if a character is alphabetic.
* `ft_isdigit` — Checks if a character is a digit.
* `ft_isalnum` — Checks if a character is alphanumeric.
* `ft_isascii` — Checks if a character is an ASCII character.
* `ft_isprint` — Checks if a character is printable.

---

### String Processing

* `ft_strlen` — Returns the length of a string.
* `ft_strdup` — Duplicates a string.
* `ft_strchr` — Returns pointer to first occurrence of a character.
* `ft_strrchr` — Returns pointer to last occurrence of a character.
* `ft_strncmp` — Compares two strings up to n characters.
* `ft_strnstr` — Locates a substring within a limited length.
* `ft_substr` — Extracts a substring from a string.
* `ft_strjoin` — Concatenates two strings into a new string.
* `ft_strtrim` — Trims specified characters from both ends.
* `ft_split` — Splits a string by a delimiter into an array.
* `ft_strmapi` — Creates a new string applying a function to each character.
* `ft_striteri` — Applies a function to each character in-place.

---

### Memory Handling

* `ft_memset` — Fills a block of memory with a byte.
* `ft_bzero` — Sets a block of memory to zero.
* `ft_memcpy` — Copies memory from source to destination.
* `ft_memmove` — Copies memory safely handling overlap.
* `ft_memchr` — Searches for a byte in memory.
* `ft_memcmp` — Compares two memory blocks.
* `ft_calloc` — Allocates zero-initialized memory.

---

### Data Conversion

* `ft_atoi` — Converts a string to an integer.
* `ft_itoa` — Converts an integer to a string.

---

### Output Utilities

* `ft_putchar_fd` — Writes a character to a file descriptor.
* `ft_putstr_fd` — Writes a string to a file descriptor.
* `ft_putendl_fd` — Writes a string followed by a newline.
* `ft_putnbr_fd` — Writes an integer as a string.

---

### Bonus — Linked List Utilities

The bonus component extends the library with singly linked list operations using the `t_list` structure.

* `ft_lstnew` — Creates a new list element.
* `ft_lstadd_front` — Adds an element at the beginning of a list.
* `ft_lstadd_back` — Adds an element at the end of a list.
* `ft_lstsize` — Returns the size of a list.
* `ft_lstlast` — Returns the last element of a list.
* `ft_lstdelone` — Deletes a single list element.
* `ft_lstclear` — Deletes and frees all elements of a list.
* `ft_lstiter` — Applies a function to each element of a list.
* `ft_lstmap` — Creates a new list by applying a function to each element.

---

## Build System

The project is built using a Makefile.

Available targets:

```bash
make        # Build mandatory and bonus functions 
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Rebuild from scratch
```
If you want to use the request Makefile in the subject, replace the Makefile with the one in the Milestone0_Makefile.

```bash
make        # Build mandatory functions 
make bonus  # Build bonus functions
make all    # Build mandatory and bonus
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Rebuild from scratch
```
The output is a static library named `libft.a`.

---

## Testing Strategy

Each function includes its own dedicated test file.

Testing procedure:

1. Open the corresponding test file
2. Uncomment the test section by removing `/* */`
3. Compile manually as instruction requires

This approach enables isolated validation and precise debugging of individual components.

In the test directory you'll find also my program own tester which test all the function in a single command. To test, copie the tester in libft directory :

```bash
make
cc -Wall -Werror - Wextra main_test_libft.c libft.a
./a.out
```

---

## Integration

To link the library in another project:

```bash
cc main.c -L. -lft
```

Include the header file:

```c
#include "libft.h"
```

---

## Checking Tools

The project was checked using the following tools:

* **Francinette**
  [https://github.com/xicodomingues/francinette](https://github.com/xicodomingues/francinette)

* **Norminette**
  [https://github.com/42school/norminette](https://github.com/42school/norminette)

---

## References and Resources

Primary references used during development:

* Linux manual pages (`man 3 <function>`)
* *C Programming: A Modern Approach*
  K. N. King
* Peers

These resources were used to ensure correctness, expected behavior, and conformity with standard C specifications.

---

## Notes

`libft` is intended to be a long-lived dependency.
Correctness, strict compliance with standards, and defensive implementation choices were prioritized to ensure reliability across future projects.

---

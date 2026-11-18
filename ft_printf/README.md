*This project has been created as part of the 42 curriculum by nukanjan.*

# ft_printf

## Description

The **ft_printf** project is about recreating the standard C library function `printf()`.

The main goal is to understand and implement variadic functions in C using `va_start`, `va_arg`, and `va_end`.

This project creates a custom `ft_printf()` function that handles different data types and format specifiers, reproducing the basic behavior of the original `printf()` function.

## Supported Conversions

| Conversion | Description |
|---|---|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal |
| `%d` | Prints a decimal integer |
| `%i` | Prints an integer in base 10 |
| `%u` | Prints an unsigned decimal number |
| `%x` | Prints a hexadecimal number in lowercase |
| `%X` | Prints a hexadecimal number in uppercase |
| `%%` | Prints a percent sign |

## Source Files

The project is organized into the following files:

| File | Description |
|---|---|
| `ft_printf.c` | Main printf function and argument handling |
| `ft_putchar.c` | Prints a single character |
| `ft_putstr.c` | Prints a string |
| `ft_putnbr.c` | Prints a signed integer |
| `ft_putpointer.c` | Prints a pointer address |
| `ft_puthex.c` | Prints hexadecimal numbers |
| `ft_putunsign.c` | Prints an unsigned integer |
| `ft_format.c` | Handles format specifiers and conversions |

## Instructions

### Compilation

Compile the source files using:

```bash
make
```

The Makefile creates the static library:

```bash
libftprintf.a
```

### Usage

Include the header file in your C program:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c libftprintf.a
```

### Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "42");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    ft_printf("Character: %c\n", 'A');

    return (0);
}
```

Output:

```text
Hello, 42!
Number: 42
Hexadecimal: ff
Character: A
```

## Algorithm and Technical Choices

The project uses a variadic function to handle a variable number of arguments.

The main algorithm works as follows:

1. Read the format string character by character.
2. Check whether the current character is `%`.
3. If it is not a format specifier, print the character directly.
4. If it is `%`, check the next character to identify the conversion type.
5. Use `va_arg()` to retrieve the corresponding argument.
6. Call the appropriate helper function to print the value.
7. Count the number of characters printed and return the total.

### Variadic Functions

The project uses the following macros:

- `va_start()` – Initializes the argument list.
- `va_arg()` – Retrieves the next argument.
- `va_end()` – Ends the argument list.

### Data Structures

The implementation mainly uses:

- A `va_list` variable to manage variadic arguments.
- Character pointers to access the format string.
- Integer variables to track the number of characters printed.

The implementation uses a modular structure, separating each conversion into helper functions. This makes the code easier to maintain, understand, and extend.

## Resources

- [42 ft_printf Subject](https://cdn.intra.42.fr/pdf/pdf/96050/en.subject.pdf)
- [C Programming - printf()](https://cplusplus.com/reference/cstdio/printf/)
- [GNU C Library - Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
- [C Reference - stdarg.h](https://en.cppreference.com/w/c/variadic.html)

### AI Usage

AI tools were used as a learning and support resource during the project.

They helped with:
- Understanding variadic functions and their usage.
- Clarifying format specifiers and conversion behavior.
- Understanding compiler errors and debugging issues.
- Reviewing code structure and improving documentation.

All implementation decisions and code should be understood and verified by the student.

## Author

**nukanjan**  
42 Student
*This project has been created as part of the 42 curriculum by nukanjan.*

Libft
Description

Libft is a custom C library created as part of the 42 curriculum. The goal is to recreate useful functions from the standard C library and add additional functions for string, memory, conversion, file descriptor, and linked-list manipulation.

The library is compiled into a static library called libft.a.

Library

The library contains:

Character functions: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower

String functions: ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_strdup, ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_strmapi, ft_striteri

Memory functions: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc

Conversion functions: ft_atoi, ft_itoa

File descriptor functions: ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

Linked-list functions: ft_lstnew, ft_lstadd_front, ft_lstadd_back, ft_lstsize, ft_lstlast, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap

Instructions

Compile the library:

make


Clean object files:

make clean


Remove all generated files:

make fclean


Recompile from scratch:

make re


To use the library:

#include "libft.h"


Compile with:

cc main.c libft.a -o program

Resources

C standard library documentation and Unix man pages.

man 3 documentation for functions such as strlen, memcpy, calloc, and atoi.

C programming references about pointers, memory management, strings, and linked lists.

AI Usage

AI was used as a learning and reference tool to understand C concepts, clarify standard function behavior, check Makefile syntax, review potential edge cases, and help write this README. The library functions were implemented and reviewed as part of the project work.

Author

nukanjan

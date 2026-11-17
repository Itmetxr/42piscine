#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

void ft_format(const char *format, va_list args);
int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putstr(const char *str);
void ft_putnbr(int n);
void ft_puthex(unsigned int n, char c);
void ft_putunsign(unsigned int n);
void ft_putpointer(unsigned long n);

#endif
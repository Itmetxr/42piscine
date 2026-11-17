#include "ft_printf.h"

void ft_putunsign(unsigned int n)
{
	if (n >= 10)
		ft_putunsign(n / 10);
	ft_putchar(n % 10 + '0');
}
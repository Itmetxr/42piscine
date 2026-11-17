#include "ft_printf.h"

void ft_format(const char *format, va_list args)
{
	int i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				ft_putchar(va_arg(args, int));
			else if (format[i] == 's')
				ft_putstr(va_arg(args, char *));
			else if (format[i] == 'd' || format[i] == 'i')
				ft_putnbr(va_arg(args, int));
			else if (format[i] == 'u')
				ft_putunsign(va_arg(args, unsigned int));
			else if (format[i] == 'x' || format[i] == 'X')
				ft_puthex(va_arg(args, unsigned int), format[i]);
			else if (format[i] == 'p')
				ft_putpointer(va_arg(args, unsigned long));
			else if (format[i] == '%')
				ft_putchar('%');
		}
		else
		{
			ft_putchar(format[i]);
		}
		i++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 13:51:06 by nukanjan          #+#    #+#             */
/*   Updated: 2026/11/18 17:06:15 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	fn(char format, va_list args)
{
	int	res;

	res = 0;
	if (format == 'c')
		res += ft_putchar(va_arg(args, int));
	else if (format == 's')
		res += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		res += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		res += ft_putunsign(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		res += ft_puthex(va_arg(args, unsigned int), format);
	else if (format == 'p')
		res += ft_putpointer(va_arg(args, unsigned long));
	else if (format == '%')
		res += ft_putchar('%');
	return (res);
}

int	ft_format(const char *format, va_list args)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			res += fn(format[i], args);
		}
		else
			res += ft_putchar(format[i]);
		i++;
	}
	return (res);
}

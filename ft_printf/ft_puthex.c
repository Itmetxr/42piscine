/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 13:52:59 by nukanjan          #+#    #+#             */
/*   Updated: 2026/11/18 17:50:42 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char c)
{
	char	*hex;
	int		res;

	res = 0;
	if (n >= 16)
		res += ft_puthex(n / 16, c);
	if (c == 'X')
	{
		hex = "0123456789ABCDEF";
		res += ft_putchar(hex[n % 16]);
	}
	else
	{
		hex = "0123456789abcdef";
		res += ft_putchar(hex[n % 16]);
	}
	return (res);
}

// int main()
// {
// 	unsigned int num = 255;
// 	ft_puthex(num,'x');
// 	ft_puthex(num,'X');
// 	return 0;
// }
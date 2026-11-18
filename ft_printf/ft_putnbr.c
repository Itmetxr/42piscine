/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 13:53:21 by nukanjan          #+#    #+#             */
/*   Updated: 2026/11/18 17:37:16 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	res;

	res = 0;
	if (n == -2147483648)
	{
		return (ft_putstr("-2147483648"));
	}
	if (n < 0)
	{
		res += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		res += ft_putnbr (n / 10);
	res += ft_putchar (n % 10 + '0');
	return (res);
}

// #include <stdio.h>
// int main()
// {
// 	ft_putnbr(10);
// 	ft_putnbr(010);
// 	printf("\n");
// 	ft_putnbr(2147483647);
// 	printf("\n");
// 	ft_putnbr(-2147483648);
// 	printf("\n");
// 	// printf("pf %d\n",2147483647);
// 	// printf("pf %d\n",-2147483648);
// 	return 0;
//}

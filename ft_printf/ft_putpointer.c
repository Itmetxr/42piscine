/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 13:53:52 by nukanjan          #+#    #+#             */
/*   Updated: 2026/11/18 17:49:56 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long n)
{
	int	res;

	res = 0;
	if (n == 0)
		return (res += ft_putstr("(nil)"));
	res += ft_putstr("0x");
	res += ft_puthex(n, 'x');
	return (res);
}

//int main()
//{
//	unsigned long num = 1234;
//	ft_putpointer(num);
//	return 0;
//}

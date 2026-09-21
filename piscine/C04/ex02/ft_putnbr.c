/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 09:40:55 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/27 10:58:15 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;
	char	c;

	n = nb;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	ft_putchar(c);
}
// int main(void)
// {
// 	int x = 2147;
// 	ft_putnbr(x);
// }
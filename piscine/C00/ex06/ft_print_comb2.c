/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 12:31:19 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/09 12:38:55 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_numbers(void)
{
	char	i;
	char	j;
	char	x;
	char	y;

	x = '0';
	y = '0';
	i = '0';
	j = '0';
	if (i <= '9' && j <= '9')
	{
		while (i <= '9')
		{
			while (j <= '8')
			{
				ft_write(x, y, i, j);
				write(1, ", ", 2);
				j++;
			}
			ft_write(x, y, i, j);
			i++;
			j = '0';
			write(1, ", ", 2);
		}
	}
	if (x <= '9' && y <= '9' )
	{
		y = '1';
		while (x <= '9')
		{
			i = '9';
			j = '9';
			while (y <= '8')
			{
				ft_write(x, y, i, j);
				write(1, ", ", 2);
				y++;
			}
			ft_write(x, y, i, j);
			x++;
			y = '0';
			if (x <= '9')
			{
				write(1, ", ", 2);
			}
		}
	}
}
// int	main(void)
// {
// 	ft_print_numbers();
// }

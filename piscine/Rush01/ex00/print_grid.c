/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerdcha <skerdcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 21:26:03 by skerdcha          #+#    #+#             */
/*   Updated: 2026/07/19 23:14:38 by skerdcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_digit(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	print_grid(int *rs, int n)
{
	int	row;
	int	col;
	int	i;

	row = 0;
	i = 0;
	while (row < n)
	{
		col = 0;
		while (col < n)
		{
			write_digit(rs[i]);
			if (col != n - 1)
				write(1, " ", 1);
			i++;
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

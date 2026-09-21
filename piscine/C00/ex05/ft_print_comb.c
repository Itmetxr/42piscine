/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 16:30:49 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/09 11:04:23 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a, char b, char c)
{
	if (a <= '6' && b <= '8' && c <= '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, ", ", 2);
	}
	else if (a == '7' && b == '8' && c == '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
}

void	ft_print_comb(void)
{
	char	f;
	char	s;
	char	t;

	f = '0';
	s = '1';
	t = '2';
	while (f <= '7' && s <= '8' && t <= '9')
	{
		ft_write(f, s, t);
		t++;
		if (t == '9')
		{
			ft_write(f, s, t);
			s++;
			t = s + 1;
			if (s == '8')
			{
				ft_write(f, s, t);
				f++;
				s = f + 1;
				t = s + 1;
			}
		}
	}
}

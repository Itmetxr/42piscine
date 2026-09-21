/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 06:54:30 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/31 06:58:47 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (argv[j][i] != '\0' && argc)
	{
		while (argv[j][i] != '\0' && argc)
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		i = 0;
		ft_putchar('\n');
		j++;
	}
}

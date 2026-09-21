/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 09:40:59 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/27 18:00:27 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*signs(int *sign, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j] == ' ' || (str[j] >= 9 && str[j] <= 13)
		|| str[j] == '-' || str[j] == '+')
	{
		j++;
		while (str[j] == '-')
		{
			i++;
			j++;
		}
		while (str[j] == '+')
		{
			j++;
		}
	}
	if (i % 2 != 0)
		*sign = -1;
	else
		*sign = 1;
	return (str + j);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	j;

	str = signs(&sign, str);
	j = 0;
	if (str[j] == '0')
	{
		write(1, "0", 1);
		return (0);
	}
	if (sign == -1)
		write(1, "-", 1);
	while (str[j] >= '0' && str[j] <= '9' && str[j])
	{
		write(1, &str[j], 1);
		j++;
	}
	return (0);
}
int	main(void)
{
	ft_atoi("    ---+--      ++11234ab56-7");
	write(1, "\n", 1);
	ft_atoi("-00034560");
	write(1, "\n", 1);
	ft_atoi("\n\t----1c234567a");
	write(1, "\n", 1);
	ft_atoi("  -1234-5");
		write(1, "\n", 1);
	ft_atoi("-123444ab2345");
		write(1, "\n", 1);
	ft_atoi("21");
}
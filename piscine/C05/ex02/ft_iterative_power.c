/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 11:35:29 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/28 11:35:30 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	pow;

	pow = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power-- >= 1)
	{
		pow *= nb;
	}
	return (pow);
}
// int main ()
// {
// 	printf("%d",ft_iterative_power(2,5));
// }
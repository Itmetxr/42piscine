/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 11:35:41 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/28 11:40:16 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1 || (nb % 2 == 0 && nb != 2))
		return (0);
	if (nb == 2)
		return (1);
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
// #include<stdio.h>
// int	main()
// {
// 	printf("%d",ft_is_prime(3));
// }
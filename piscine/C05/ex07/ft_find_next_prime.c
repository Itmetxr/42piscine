/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 06:17:56 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/31 06:27:46 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_prime(nb) == 0)
		nb++;
	return (nb);
}
// #include<stdio.h>
// int	main(void)
// {
// 	printf("%d\n",ft_find_next_prime(2));
// 	printf("%d\n",ft_find_next_prime(3));
// 	printf("%d\n",ft_find_next_prime(11));
// 	printf("%d\n",ft_find_next_prime(12));
// 	printf("%d\n",ft_find_next_prime(21));
// 	printf("%d\n",ft_find_next_prime(26));
// 	printf("%d\n",ft_find_next_prime(7));
// 	printf("%d",ft_find_next_prime(4));
// 	return (0);
// }
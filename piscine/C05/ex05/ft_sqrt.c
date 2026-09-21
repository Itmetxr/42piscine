/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 11:35:38 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/28 11:35:39 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i < nb)
	{
		i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}
// #include<stdio.h>
// int	main(void)
// {
// 	printf ("sqrt :  %d\n",ft_sqrt(10));
// 	printf ("sqrt :  %d\n",ft_sqrt(49));
// 	printf ("sqrt :  %d\n",ft_sqrt(100));
// 	printf ("sqrt :  %d\n",ft_sqrt(-10));
// }

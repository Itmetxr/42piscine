/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 11:35:34 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/28 11:39:03 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_fibonacci(int index)
{
	int	n1;
	int	n2;
	int	sum;

	n1 = 0;
	n2 = 1;
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	while (--index > 0)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
	}
	return (sum);
}
// int main()
// {
// 	printf("%d",ft_fibonacci(3));
// }
// 0 1 1 2 3 5 8 13 21
// 0 1 2 3 4 5 6  7  8

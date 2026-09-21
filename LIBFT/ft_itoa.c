/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 17:55:22 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/20 19:50:39 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		len;

	nbr = n;
	len = get_len(nbr);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

//int	main(void)
//{
//	char	*res;
//	printf("--- Testing ft_itoa ---\n");
//	res = ft_itoa(4242);
//	printf("Test 4242        : %s\n", res);
//	free(res);
//	res = ft_itoa(0);
//	printf("Test 0           : %s\n", res);
//	free(res);
//	res = ft_itoa(-12345);
//	printf("Test -12345      : %s\n", res);
//	free(res);
//	res = ft_itoa(2147483647);
//	printf("Test INT_MAX     : %s\n", res);
//	free(res);
//	res = ft_itoa(-2147483648);
//	printf("Test INT_MIN     : %s\n", res);
//	free(res);
//	return (0);
//}

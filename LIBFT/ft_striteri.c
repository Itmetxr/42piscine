/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 18:02:45 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/20 18:05:31 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

//void	my_test_func(unsigned int i, char *c)
//{
//	if (i % 2 != 0)
//	{
//		if (*c >= 'a' && *c <= 'z')
//		{
//			*c = *c - 32;
//		}
//	}
//}

//int	main(void)
//{
//	char str[] = "hello world";
//	printf("before use function: %s\n", str);
//	ft_striteri(str, my_test_func);
//	printf("after use function: %s\n", str);
//	return (0);
//}

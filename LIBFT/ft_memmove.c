/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 16:08:43 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/16 18:17:59 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*cop;
	size_t			i;

	ptr = (unsigned char *)dest;
	cop = (unsigned char *)src;
	if (ptr > cop && ptr < cop + n)
	{
		i = n;
		while (i > 0)
		{
			i--;
			ptr[i] = cop[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			ptr[i] = cop[i];
			i++;
		}
	}
	return (dest);
}
// #include <stdio.h>
// int main()
// {
// 	char sor[20] = "Hello World";
// 	char buffer[20] = "123456789012345";
// 	ft_memmove(sor, buffer, 15);
// 	printf("Result: %s\n", sor);
// 	return 0;
// }
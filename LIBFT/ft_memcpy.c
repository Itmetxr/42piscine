/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 16:08:50 by nukanjan          #+#    #+#             */
/*   Updated: 2026/08/26 16:10:07 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*cop;
	size_t			i;

	ptr = (unsigned char *)dest;
	cop = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr[i] = cop[i];
		i++;
	}
	return (dest);
}
//#include <stdio.h>
//int main()
//{
//	char sor[20] = "Hello World";
//	char buffer[20] = "4567";
//	ft_memcpy(sor, buffer, 15);
//	printf("Result: %s\n", sor);
//	return 0;
//}
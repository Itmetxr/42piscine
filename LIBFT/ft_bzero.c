/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 16:09:25 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/20 19:02:44 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*x;

	x = (unsigned char *)s;
	while (n > 0)
	{
		*x = 0;
		x++;
		n--;
	}
}
// #include <stdio.h>
// int main()
// {
// 	char buffer[20] = "Hello World";
// 	ft_bzero(buffer,4);
// 	printf("Result: %s\n", buffer);
// }
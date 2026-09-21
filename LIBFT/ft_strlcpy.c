/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 16:31:45 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/11 15:57:55 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while ((src[i] != '\0'))
	{
		i++;
	}
	if (size == 0)
		return (i);
	j = 0;
	while (src[j] != '\0' && j < (size - 1))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}
//  #include <stdio.h>
//  int main()
//  {
// 	char source[20] = "Hello World123450-";
// 	char des[10];
//  	printf("%zu\n",ft_strlcpy(des,source,sizeof(des)));
// 	printf("%s\n",source);
// 	printf("%s\n",des);
//  }
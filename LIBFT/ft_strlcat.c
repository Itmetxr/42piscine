/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 15:27:53 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/16 17:32:37 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	while (dst[dst_len] != '\0')
		dst_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dst_len)
		return (src_len + size);
	i = 0;
	while (src[i] != '\0' && (dst_len + i) < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

//  #include <stdio.h>
//  int main()
//  {
//     char buffer[15] = "Hello ";
//     char *text = "World! asdsdfgfghjklasdf;";

//     printf("before: %s\n", buffer);

//     size_t total_length = ft_strlcat(buffer, text, sizeof(buffer));

//     printf("after: %s\n", buffer);
//     printf("want: %zu\n", total_length);

//     if (total_length >= sizeof(buffer)) {
//         printf("FULL\n");
//     }

//     return 0;
//  }
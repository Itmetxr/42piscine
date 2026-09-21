/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 15:30:12 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/16 17:25:48 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		++s;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

// int main() {
// 	char str[] = "Hello World";

// 	char *p = ft_strchr(str, 'W');

// 	if (!p)
// 	{
// 		printf("(null)\n");
// 		return 0;
// 	}
// 	printf("%s\n", p);
// 	return 0;
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 16:50:47 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/16 18:23:54 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*i;
	int			x;

	i = NULL;
	x = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			i = s;
			x++;
		}
		s++;
	}
	if (*s == (char)c)
	{
		i = s;
		x++;
	}
	if (x != 0)
		return ((char *)i);
	return (NULL);
}

//int main() {
//	char str[] = "apple-banana-orange";
//	char ch = '-';
//	char *result;

//	result = ft_strrchr(str, ch);

//	if (result != NULL) {
//		printf("last text: %s\n", result);
//		int index = result - str;
//		printf("Index: %d\n", index);
//	} else {
//		printf("NULL\n");
//	}
//	return 0;
//}
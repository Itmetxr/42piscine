/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 16:49:06 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/20 18:43:29 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*array;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	array = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!array)
		return (NULL);
	ft_strlcpy(array, s1, len1 + 1);
	ft_strlcat(array, s2, len1 + len2 + 1);
	return (array);
}

//int main()
//{
//	char *str1 = "Hello, ";
//	char *str2 = "World!";
//	char *result;
//	result = ft_strjoin(str1, str2);
//	printf("%s\n", result);
//	free(result);   
//}
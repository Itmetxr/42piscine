/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 18:00:14 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/18 18:07:21 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

//char	uppercase_even_index(unsigned int i, char c)
//{
//	if (i % 2 == 0)
//	{
//		if (c >= 'a' && c <= 'z')
//			return (c - 32);
//	}
//	return (c);
//}
//int	main(void)
//{
//	char	*str = "hello bangkok";
//	char	*result;
//	printf("Original string: %s\n", str);
//	result = ft_strmapi(str, uppercase_even_index);
//	if (result == NULL)
//	{
//		printf("Memory allocation failed!\n");
//		return (1);
//	}
//	printf("Result string  : %s\n", result);
//	free(result);
//	return (0);
//}
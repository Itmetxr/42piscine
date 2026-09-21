/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:58:12 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/18 17:08:41 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

//int main()
//{
//    char x[] = "Learning C PrProgramming";
//    char y[] = "Pro";
//    char *result;
//    result = ft_strnstr(x, y, 20);
//    if (result == NULL)
//        printf("case 1: don't see: %s\n",result);
//	else
//        printf("case 2: see it: %s\n", result);
//    return 0;
//}

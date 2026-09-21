/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 13:44:39 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/16 18:18:45 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((*s1 != '\0') || (*s2 != '\0')) && (i < n))
	{
		if (*s1 != *s2)
			return ((unsigned char )*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

//int main() {
//	char str1[] = "apple_a";
//	char str2[] = "apple_A";
//	int n;
//	scanf("%d",&n);
//	int result = ft_strncmp(str1, str2, n);
//	if (result == 0) {
//		printf("first %d same!\n",n);
//	} else {
//		printf("first %d difference!\n",n);
//		printf("%d",result);
//	}
//	printf("%d",ft_strncmp("test\200", "test\0", 6));
//	return 0;
//}
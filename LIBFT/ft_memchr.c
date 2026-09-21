/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:11:10 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/16 14:37:46 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*i;

	i = (unsigned char *)s;
	while (n > 0)
	{
		if (*i == (unsigned char)c)
			return ((void *)i);
		n--;
		i++;
	}
	return (NULL);
}

//int main() {
//    char data[] = "Learning C Programming";
//    char search_char = 'i';
//    char *result;

//    result = (char *)ft_memchr(data, search_char, sizeof(data));

//    if (result != NULL) {
//        printf("find '%c' at: %s\n", search_char, result);

//        int index = result - data;
//        printf("Index: %d\n", index);
//    } else {
//        printf("NULL\n");
//    }

//    return 0;
//}
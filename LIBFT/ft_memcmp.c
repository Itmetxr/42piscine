/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:38:42 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/16 14:57:38 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*x;
	unsigned char	*y;

	x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	while (n > 0)
	{
		if (*x != *y)
			return (*x - *y);
		x++;
		y++;
		n--;
	}
	return (0);
}

//int main() {
//    int array1[] = {1, 2, 3, 9, 5};
//    int array2[] = {1, 2, 3, 4, 5};
//    int result = ft_memcmp(array1, array2, 5 * sizeof(int));
//    if (result == 0)
//        printf("%d Same\n",result);
//    else
//        printf("%d Difference\n",result);
//    return 0;
//}
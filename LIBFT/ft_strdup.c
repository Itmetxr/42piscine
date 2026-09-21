/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 15:32:37 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/18 18:09:23 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*array;
	int		total;
	int		i;

	total = ft_strlen(s);
	array = malloc((total + 1) * sizeof(char));
	if (!array)
		return (NULL);
	i = 0;
	while (i < total)
	{
		array[i] = *s++;
		i++;
	}
	array[i] = '\0';
	return (array);
}

//int main() {
//    char source[] = "Hello, World!";
//    char *dest;
//    dest = ft_strdup(source);
//    if (dest == NULL) {
//        printf("NULL!\n");
//        return 1;
//    }
//    printf("Source: %s\n", source);
//    printf("Duplicate (Dest): %s\n", dest);
//    free(dest);
//    return 0;
//}

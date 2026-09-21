/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 16:43:04 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/24 17:25:47 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
// int main()
// {
//     char dest[20] = "Hello ";
//     char src[] = "World"; 
//          printf("%s\n",ft_strcat(dest, src));
// return(0);
// }

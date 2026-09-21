/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 07:12:08 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/31 08:00:10 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int	totalstr(int size, char **strs, char *sep)
{
	int	total;

	if (size <= 0)
		return (1);
	total = 0;
	while (size > 0)
	{
		total += ft_strlen(*strs);
		if (size > 1)
			total += ft_strlen(sep);
		size--;
		strs++;
	}
	return (total + 1);
}

char	*addstr(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	char	*ptr;

	if (size <= 0)
	{
		size = 0;
	}
	res = (char *)malloc(sizeof(char) * totalstr(size, strs, sep));
	if (!res)
		return (NULL);
	ptr = res;
	while (size > 0)
	{
		ptr = addstr (ptr, *strs);
		if (size > 1)
		{
			ptr = addstr(ptr, sep);
		}
		strs++;
		size--;
	}
	*ptr = '\0';
	return (res);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char *strs[] = {"Hello", "Mr.", "Jhon!"};
// 	char *res = ft_strjoin(0,strs,",");

// 	if(res)
// 	{
// 		printf("%s\n", res);
// 		free (res);
// 	}
// 	return(0);
// }

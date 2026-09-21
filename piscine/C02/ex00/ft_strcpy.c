/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:50:34 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/17 13:59:44 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main()
{
	char x[15] = "good evening";
	char y[15] = "ohmygodddd";
	printf("before : %s %s/n",x,y);
	ft_strcpy(y,x);
	printf("after : %s %s",x,y);
}*/

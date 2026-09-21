/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 15:15:14 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/17 14:13:12 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int main(void)
{
	char x[] = "goodmorning";
	char y[] = ".........";
	int z;
	printf("before : %s %s\nhow many word : ",x,y);
	scanf("%d",&z);
	ft_strncpy(y,x,z);
	printf("\nafter : %s",y);
 }*/

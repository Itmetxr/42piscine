/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 17:21:53 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/24 17:22:36 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j] && str[i])
		{
			j++;
			if (!to_find[j])
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
// int main(void)
//  {
//     char s1[] = "n n hi nat is not omgggg";
//     char s2[] = "nat";
//     printf("%s\n",ft_strstr(s1, s2));
// }

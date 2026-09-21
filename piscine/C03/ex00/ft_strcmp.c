/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 19:19:24 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/24 17:27:35 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if ((s1[i] - s2[i]) != 0)
		{
			return ((s1[i]) - (s2[i]));
		}
		i++;
	}
	return (0);
}
// int main()
// {
// 	char x[] = "abcdA";
// 	char y[] = "abcd";
// 	char z[] = "abxyddss";
// 	printf("%d\n",ft_strcmp(x,y));
// 	printf("%d",ft_strcmp(x,z));
// 	return (0);
// }
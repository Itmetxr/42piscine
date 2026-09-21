/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 17:18:02 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/16 17:53:01 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*strc(char *st)
{
	int	m;

	m = 1;
	if (st[0] >= 65 && st[0] <= 90)
	{
		while (st[m] >= 65 && st[m] <= 90)
		{
			st[m] = st[m] + 32;
			m++;
		}
	}
	if (st[0] >= 97 && st[0] <= 122)
	{
		st[0] = st[0] - 32;
		while (st[m] >= 65 && st[m] <= 90)
		{
			st[m] = st[m] + 32;
			m++;
		}
	}
	return (st);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 2;
	strc(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
			while (str[j + i] >= 65 && str[j + i] <= 90)
			{
				str[j + i] = str[j + i] + 32;
				j++;
			}
		}
		i++;
	}
	return (str);
}
/*int main()
{
        char x[] = "hi,are you? 42word thank-you oh+my+god  GOODBYE";
        printf("input : %s\n",x);
        printf("result : %s",ft_strcapitalize(x));
}*/

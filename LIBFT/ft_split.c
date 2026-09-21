/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 17:39:06 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/20 19:56:04 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	n;

	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			n++;
		while (*s && *s != c)
			s++;
	}
	return (n);
}

static void	free_all(char **r, int i)
{
	while (i--)
		free(r[i]);
	free(r);
}

static int	fill_words(char **r, char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		r[i] = ft_substr(s, 0, len);
		if (!r[i++])
		{
			free_all(r, i - 1);
			return (0);
		}
		s += len;
	}
	r[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**r;

	if (!s)
		return (NULL);
	r = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!r)
		return (NULL);
	if (!fill_words(r, s, c))
		return (NULL);
	return (r);
}

//int main(void)
//{
//	char	*str = "Hello World 42 Bangkok";
//	char	**result = ft_split(str, ' ');
//	int		i;
//	if (!result)
//		return (1);
//	i = 0;
//	while (result[i] != NULL)
//	{
//		printf("Word[%d]: %s\n", i, result[i]);
//		free(result[i]);
//		i++;
//	}
//	free(result);
//	return (0);
//}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 17:00:36 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/18 17:52:49 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*array;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	array = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (start < end)
	{
		array[i] = s1[start];
		i++;
		start++;
	}
	array[i] = '\0';
	return (array);
}

//int main()
//{
//	char *s1 = "   \t Hello \nWorld!   \n";
//	char *set = " \t\n";
//	char *result = ft_strtrim(s1, set);
//	printf("%s\n", result);
//	free(result);
//}
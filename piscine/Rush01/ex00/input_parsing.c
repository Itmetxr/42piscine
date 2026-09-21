/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaw <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:15:55 by bsaw              #+#    #+#             */
/*   Updated: 2026/07/19 14:15:59 by bsaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_size(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i])
	{
		if (str[i] > '0' && str[i] <= '9')
			size++;
		else
			return (-1);
		i++;
		if (str[i] == '\0')
			break ;
		if (str[i] != ' ')
			return (-1);
		i++;
		if (str[i] == '\0')
			return (-1);
	}
	return (size);
}

int	*assign_num(char *str, int *r)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] > '0' && str[i] <= '9')
		{
			r[j] = str[i] - '0';
			j++;
		}
		else
			return (NULL);
		i++;
		if (str[i] == '\0')
			break ;
		if (str[i] != ' ')
			return (NULL);
		i++;
		if (str[i] == '\0')
			return (NULL);
	}
	return (r);
}

int	*input_parsing(char *str, int *n)
{
	int	*r;
	int	size;

	r = NULL;
	size = get_size(str);
	if (size < 1 || size % 4 != 0)
		return (NULL);
	*n = size / 4;
	r = malloc(sizeof(int) * size);
	if (r == NULL)
		return (NULL);
	if (assign_num(str, r) == NULL)
	{
		free(r);
		return (NULL);
	}
	return (r);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deepcopy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapoolpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 16:24:48 by sapoolpr          #+#    #+#             */
/*   Updated: 2026/07/18 17:57:59 by sapoolpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*deepcopy(int *grid, int n)
{
	int	i;
	int	*copy;

	copy = malloc(sizeof(int) * (n * n));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < (n * n))
	{
		copy[i] = grid[i];
		i++;
	}
	return (copy);
}

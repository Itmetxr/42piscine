/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapoolpr <sapoolpr@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 15:33:02 by sapoolpr          #+#    #+#             */
/*   Updated: 2026/07/19 19:17:14 by sapoolpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	print_grid(int *grid, int n);
int		validate_grid(int *grid, int *cnst, int n, int cell_idx);
int		find_to_fill(int *grid, int *constraint, int n, int *choices);

int	*create_empty_grid(int n)
{
	int	i;
	int	size;
	int	*grid;

	size = n * n;
	grid = malloc(sizeof(int) * size);
	if (!grid)
		return (NULL);
	i = 0;
	while (i < size)
		grid[i++] = 0;
	return (grid);
}

int	backtrack_sky_scraper(int *grid, int *constraint, int n)
{
	int	i;
	int	cell_idx;
	int	choices[10];

	choices[0] = -1;
	cell_idx = find_to_fill(grid, constraint, n, choices);
	if (cell_idx == -1)
		return (1);
	i = 0;
	while (choices[i] != -1)
	{
		grid[cell_idx] = choices[i++];
		if (backtrack_sky_scraper(grid, constraint, n))
			return (1);
	}
	grid[cell_idx] = 0;
	return (0);
}

int	*solve_sky_scraper(int *constraint, int n)
{
	int	*grid;

	grid = create_empty_grid(n);
	if (!grid)
		return (NULL);
	if (!backtrack_sky_scraper(grid, constraint, n))
	{
		free(grid);
		return (NULL);
	}
	return (grid);
}

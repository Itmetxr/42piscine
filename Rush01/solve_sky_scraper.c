/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sky_scraper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapoolpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 15:33:02 by sapoolpr          #+#    #+#             */
/*   Updated: 2026/07/18 18:05:51 by sapoolpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

int	*deepcopy(int *grid, int n);
int	valid_grid(int *grid, int *constraint, int n, int i);
void	print_grid(int *grid, int n);

int	*find_possible(int *grid, int *constraint, int n)
{
	int	i;
	int	*possible;

	(void) grid;
	(void) constraint;
	possible = malloc(sizeof(int) * (n + 1));
	if (!possible)
		return (NULL);
	i = 0;
	while (i < n)
	{
		possible[i] = i + 1;
		i++;
	}
	possible[i] = -1;
	return (possible);
}

int	find_to_fill_cell(int *grid, int *constraint, int n, int **possible)
{
	int	i;

	i = 0;
	(void) constraint;
	while (i < n * n)
	{
		if (grid[i] == 0)
		{
			*possible = find_possible(grid, constraint, n);
			return (i);
		}
		i++;
	}
	return (-1);
}

void	*error_failure(int *grid, int *is_failure)
{
	free(grid);
	*is_failure = 1;
	return (NULL);
}

void	print_possible(int *possible)
{
	printf("Possible: ");
	for (int i = 0; i < INT_MAX; i++)
	{
		if (possible[i] == -1)
			break ;
		printf("%d ", possible[i]);
	}
	printf("\n");
}

int	*solve_sky_scraper(int *grid, int *constraint, int n, int *is_failure)
{
	int	i;
	int	*ret;
	int	cell_idx;
	int	*possible;

	// print_grid(grid, n);
	if (!grid)
		return (error_failure(grid, is_failure));
	cell_idx = find_to_fill_cell(grid, constraint, n, &possible);
	// printf("Filling IDX: %d\n", cell_idx);
	if (cell_idx < 0)
		return (grid);
	else if (!possible)
		return (error_failure(grid, is_failure));
	i = -1;
	ret = NULL;
	// print_possible(possible);
	while ((possible && possible[++i] != -1) && !ret && !*is_failure)
	{
		grid[cell_idx] = possible[i];
		print_grid(grid, n);
		// printf("\n");
		if (!valid_grid(grid, constraint, n, cell_idx))
			continue ;
		ret = solve_sky_scraper(deepcopy(grid, n), constraint, n, is_failure);
	}
	free(possible);
	free(grid);
	return (ret);
}

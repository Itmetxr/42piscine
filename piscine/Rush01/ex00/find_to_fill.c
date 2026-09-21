/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_to_fill.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapoolpr <sapoolpr@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 23:29:36 by sapoolpr          #+#    #+#             */
/*   Updated: 2026/07/19 02:59:11 by sapoolpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	assign_choices(int *choices, int val);
int		ft_min_choice(int i, int j);
int		get_row_col(int idx, int n, int *row, int *col);
int		in_upper_limit(int *cst, int n, int to_check, int pos);
int		validation(int *constraint, int *grid, int n, int pos);

int	validate_col(int *grid, int n, int to_check, int pos)
{
	int	i;

	i = 0;
	while (i++ < n)
	{
		if (grid[pos] == to_check)
		{
			return (0);
		}
		pos = pos + n;
	}
	return (1);
}

int	validate_row(int *grid, int n, int to_check, int pos)
{
	while (n-- > 0)
	{
		if (grid[pos++] == to_check)
			return (0);
	}
	return (1);
}

int	get_choices(int *grid, int *constraint, int n, int pos)
{
	int	i;
	int	choices;

	i = 0;
	choices = 0;
	while (i < n)
	{
		if (!in_upper_limit(constraint, n, i + 1, pos)
			|| !validate_col(grid, n, i + 1, pos % n)
			|| !validate_row(grid, n, i + 1, (pos / n) * n)
		)
		{
			i++;
			continue ;
		}
		grid[pos] = i + 1;
		if (validation(constraint, grid, n, pos))
		{
			choices = choices | 1 << (i + 1);
		}
		grid[pos] = 0;
		i++;
	}
	return (choices);
}

// choices will be the concept of 0 + 1 << n where n = choice
int	find_to_fill(int *grid, int *constraint, int n, int *choices)
{
	int	i;
	int	val;
	int	min_i;
	int	min_choice;

	i = -1;
	min_i = -1;
	val = 0;
	min_choice = 0b1111111111;
	while (++i < (n * n))
	{
		if (grid[i] != 0)
			continue ;
		val = get_choices(grid, constraint, n, i);
		if (ft_min_choice(val, min_choice) == val)
		{
			min_i = i;
			min_choice = val;
		}
	}
	if (min_i != -1)
		assign_choices(choices, min_choice);
	return (min_i);
}

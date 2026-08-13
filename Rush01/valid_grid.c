/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapoolpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 18:05:24 by sapoolpr          #+#    #+#             */
/*   Updated: 2026/07/18 18:17:32 by sapoolpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	valid_top(int *grid, int visible, int col, int n)
{
	int	i;
	int	zero;
	int	cnt;
	int	max;

	i = 0;
	cnt = 0;
	max = 0;
	zero = 0;
	while (i < n)
	{
		if ((*(grid + (n * i) + col) == 0))
			return (1);
		else
		{
			if (*(grid + (n * i) + col) > max)
			{
				max = *(grid + (n * i) + col);
				cnt++;
			}
		}
		i++;
	}
	if (cnt > visible)
		return (0);
	else if (cnt + zero >= visible)
		return (1);
	return (cnt == visible);
}

int	valid_bot(int *grid, int visible, int col, int n)
{
	int	i;
	int	zero;
	int	cnt;
	int	max;

	i = n - 1;
	cnt = 0;
	max = 0;
	zero = 0;
	while (i >= 0)
	{
		if ((*(grid + (n * i) + col) == 0))
			return (1);
		else 
		{
			if (*(grid + (n * i) + col) > max)
			{
				max = *(grid + (n * i) + col);
				cnt++;
			}
		}
		i--;
	}
	if (cnt > visible)
		return (0);
	else if (cnt + zero >= visible)
		return (1);
	return (cnt == visible);
}

int	valid_left(int *grid, int visible, int row, int n)
{
	int	i;
	int	zero;
	int	cnt;
	int	max;

	i = 0;
	cnt = 0;
	max = 0;
	zero = 0;
	while (i < n)
	{
		if (*(grid + (n * row) + i) == 0)
			return (1);
		else 
		{
			if (*(grid + (n * row) + i) > max)
			{
				max = *(grid + (n * row) + i);
				cnt++;
			}
		}
		i++;
	}
	// printf("cnt vs zero vs visible: %d vs %d vs %d\n", cnt, zero, visible);
	if (cnt > visible)
		return (0);
	else if (cnt + zero >= visible)
		return (1);
	return (cnt == visible);
}

int	valid_right(int *grid, int visible, int row, int n)
{
	int	i;
	int	zero;
	int	cnt;
	int	max;

	i = n - 1;
	cnt = 0;
	max = 0;
	zero = 0;
	while (i >= 0)
	{
		if (*(grid + (n * row) + i) == 0)
			return (1);
		else 
		{
			if (*(grid + (n * row) + i) > max)
			{
				max = *(grid + (n * row) + i);
				cnt++;
			}
		}
		i--;
	}
	printf("right cnt vs zero vs visible: %d vs %d vs %d\n", cnt, zero, visible);
	if (cnt > visible)
		return (0);
	else if (cnt + zero >= visible)
		return (1);
	return (cnt == visible);
}

int	valid_col(int *grid, int col, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		if (*(grid + (i * n) + col) == 0)
		{
			i++;
			continue;
		}
		j = 0;
		while (j < i)
		{
			if (*(grid + (j * n) + col) == 0)
			{
				j++;
				continue;
			}
			if (*(grid + (i * n) + col) == *(grid + (j * n) + col))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	valid_row(int *grid, int row, int n)
{
	int	i;
	int	j;

	// printf("Row[%d]: ", row);
	i = 0;
	while (i < n)
	{
		// printf("%d ", *(grid + (row * n) + i));
		if (*(grid + (row * n) + i) == 0)
		{
			i++;
			continue;
		}
		j = 0;
		while (j < i)
		{
			if (*(grid + (row * n) + j) == 0)
			{
				j++;
				continue;
			}
			if (*(grid + (row * n) + i) == *(grid + (row * n) + j))
			{
				// printf("\n");
				return (0);
			}
			j++;
		}
		i++;
	}
	// printf("\n");
	return (1);
}


int	valid_grid(int *grid, int *constraint, int n, int i)
{
	int	row;
	int	col;

	row = i / n;
	col = i % n;
	if (!valid_col(grid, col, n))
	{
		printf("Invalid COL\n");
		return (0);
	}
	if (!valid_row(grid, row, n))
	{
		printf("Invalid ROW\n");
		return (0);
	}
	if (!valid_top(grid, *(constraint + col), col, n))
	{
		printf("Invalid TOP\n");
		return (0);
	}
	if (!valid_bot(grid, *(constraint + n + col), col, n))
	{
		printf("Invalid BOT\n");
		return (0);
	}
	if (!valid_left(grid, *(constraint + (2 * n) + row), row, n))
	{		
		printf("Invalid LEFT\n");
		return (0);
	}
	if (!valid_right(grid, *(constraint + (3 * n) + row), row, n))
	{
		printf("Invalid RIGHT\n");
		return (0);
	}
	return (1);
}

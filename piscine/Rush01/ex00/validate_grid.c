/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 21:14:30 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/19 21:14:46 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TOP_ROW 0
#define BOTTOM_ROW 1
#define LEFT_ROW 2
#define RIGHT_ROW 3

int	ft_min(int a, int b);

int	validate_top(int cont, int n, int col, int *grid)
{
	int	max;
	int	count;
	int	row;

	row = 0;
	count = 0;
	max = 0;
	while (row < n)
	{
		if (grid[(n * row) + col] == 0)
			break ;
		if (grid[(n * row) + col] > max)
		{
			max = grid[(n * row) + col];
			count++;
		}
		row++;
	}
	if (count > cont)
		return (0);
	return (count + ft_min(n - row, n - max) >= cont);
}

int	validate_bottom(int cont, int n, int col, int *grid)
{
	int	max;
	int	count;
	int	row;

	row = n - 1;
	count = 0;
	max = 0;
	while (row >= 0)
	{
		if (grid[(n * row) + col] == 0)
			break ;
		if (grid[(n * row) + col] > max)
		{
			max = grid[(n * row) + col];
			count++;
		}
		row--;
	}
	if (count > cont)
		return (0);
	return (count + ft_min(row + 1, n - max) >= cont);
}

int	validate_left(int cont, int n, int row, int *grid)
{
	int	max;
	int	count;
	int	col;

	col = 0;
	count = 0;
	max = 0;
	while (col < n)
	{
		if (grid[(n * row) + col] == 0)
			break ;
		if (grid[(n * row) + col] > max)
		{
			max = grid[(n * row) + col];
			count++;
		}
		col++;
	}
	if (count > cont)
		return (0);
	return (count + ft_min(n - col, n - max) >= cont);
}

int	validate_right(int cont, int n, int row, int *grid)
{
	int	max;
	int	count;
	int	col;

	col = n - 1;
	count = 0;
	max = 0;
	while (col >= 0)
	{
		if (grid[(n * row) + col] == 0)
			break ;
		if (grid[(n * row) + col] > max)
		{
			max = grid[(n * row) + col];
			count++;
		}
		col--;
	}
	if (count > cont)
		return (0);
	return (count + ft_min(col + 1, n - max) >= cont);
}

int	validation(int *constraint, int *grid, int n, int pos)
{
	int	row;
	int	col;

	col = pos % n;
	row = pos / n;
	if (validate_top(constraint[(n * TOP_ROW) + col], n, col, grid)
		&& validate_bottom(constraint[(n * BOTTOM_ROW) + col], n, col, grid)
		&& validate_left(constraint[(n * LEFT_ROW) + row], n, row, grid)
		&& validate_right(constraint[(n * RIGHT_ROW) + row], n, row, grid))
	{
		return (1);
	}
	return (0);
}

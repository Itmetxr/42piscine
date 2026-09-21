/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapoolpr <sapoolpr@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 23:07:21 by sapoolpr          #+#    #+#             */
/*   Updated: 2026/07/19 18:37:57 by bsaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TOP_ROW 0
#define BOTTOM_ROW 1
#define LEFT_ROW 2
#define RIGHT_ROW 3

// {4321..x 4}
int	get_constraint(int *constraint, int n, int i, int row)
{
	return (constraint[(n * row) + i]);
}

// 
int	validate_constraint(int *constraint, int n)
{
	int	i;
	int	row;
	int	col;
	int	sum;

	i = 0;
	while (i < (4 * n))
	{
		row = i / n;
		col = i % n;
		if (constraint[i] < 1 || constraint[i] > n)
			return (0);
		if (row == TOP_ROW || row == LEFT_ROW)
		{
			sum = constraint[i] + constraint[(n * (row + 1)) + col];
			if ((sum > n + 1) || (sum < 3))
				return (0);
		}
		i++;
	}
	return (1);
}

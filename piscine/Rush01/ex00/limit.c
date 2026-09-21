/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   limit.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapoolpr <sapoolpr@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 02:01:34 by sapoolpr          #+#    #+#             */
/*   Updated: 2026/07/19 02:27:08 by sapoolpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TOP_ROW 0
#define BOTTOM_ROW 1
#define LEFT_ROW 2
#define RIGHT_ROW 3

int	get_constraint(int *constraint, int n, int i, int row);
int	get_row_col(int idx, int n, int *row, int *col);

int	in_limit(int visible, int n, int to_check, int distance)
{
	if (visible == 1 && distance == 0)
		return (to_check == n);
	return (to_check <= n - visible + 1 + distance);
}

int	in_upper_limit(int *cst, int n, int i, int idx)
{
	int	row;
	int	col;

	get_row_col(idx, n, &row, &col);
	return (
		in_limit(get_constraint(cst, n, col, TOP_ROW), n, i, row)
		&& in_limit(get_constraint(cst, n, col, BOTTOM_ROW), n, i, n - row - 1)
		&& in_limit(get_constraint(cst, n, row, LEFT_ROW), n, i, col)
		&& in_limit(get_constraint(cst, n, row, RIGHT_ROW), n, i, n - col - 1)
	);
}

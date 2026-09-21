/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapoolpr <sapoolpr@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 00:05:22 by sapoolpr          #+#    #+#             */
/*   Updated: 2026/07/19 02:33:45 by sapoolpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_int(int *arr)
{
	int	i;

	i = 0;
	while (arr[i] != -1)
		i++;
	return (i);
}

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int	get_row_col(int idx, int n, int *row, int *col)
{
	if (!row || !col)
		return (0);
	*row = idx / n;
	*col = idx % n;
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choices.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapoolpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 19:07:08 by sapoolpr          #+#    #+#             */
/*   Updated: 2026/07/19 19:10:26 by sapoolpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_min_choice(int i, int j)
{
	int	k;
	int	n;
	int	count_1;
	int	count_2;

	k = 0;
	count_1 = 0;
	count_2 = 0;
	while (k < 10)
	{
		n = 1 << k;
		if (n & i)
			count_1++;
		if (n & j)
			count_2++;
		k++;
	}
	if (count_1 < count_2)
		return (i);
	return (j);
}

void	assign_choices(int *choices, int val)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	while (i < 10)
	{
		n = 1 << i;
		if (val & n)
			choices[j++] = i;
		i++;
	}
	choices[j] = -1;
}

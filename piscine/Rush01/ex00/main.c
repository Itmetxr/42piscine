/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerdcha <skerdcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 22:54:58 by sapoolpr          #+#    #+#             */
/*   Updated: 2026/07/19 22:59:24 by skerdcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		*input_parsing(char *str, int *n);
int		*solve_sky_scraper(int *constraint, int n);
int		validate_constraint(int *constraint, int n);
void	print_grid(int *rs, int n);

void	clean(void *constraint, void *grid)
{
	free(constraint);
	free(grid);
}

int	exit_error(void *constraint, void *grid)
{
	clean(constraint, grid);
	write(2, "Error\n", 6);
	return (1);
}

int	main(int argc, char **argv)
{
	int	n;
	int	*constraint;
	int	*grid;

	if (argc != 2)
		return (exit_error(NULL, NULL));
	constraint = input_parsing(argv[1], &n);
	if (constraint == NULL || !validate_constraint(constraint, n) || n > 9)
		return (exit_error(constraint, NULL));
	grid = solve_sky_scraper(constraint, n);
	if (grid == NULL)
		return (exit_error(constraint, grid));
	print_grid(grid, n);
	clean(constraint, grid);
	return (0);
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*input_parsing(char *str, int *n);
int	*solve_sky_scraper(int *grid, int *constraint, int n, int *is_failure);

int	*build_empty_grid(int n)
{
	int	i;
	int	*grid;

	grid = malloc(sizeof(int) * (n * n));
	if (!grid)
		return (NULL);
	i = 0;
	while (i < (n * n))
	{
		grid[i] = 0;
		i++;
	}
	return (grid);
}

int	*prefill_grid(int *grid, int *constraint, int n)
{
	(void) constraint;
	(void) n;

	return (grid);
}

void	print_grid(int *grid, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d", *(grid + (i * n) + j));
			if (j + 1 < n)
				printf(" ");
		}
		printf("\n");
	}
	return ;
}

void print_constraint(int *constraint, int n)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d", *(constraint + (i * n) + j));
			if (j + 1 < n)
				printf(" ");
		}
		printf("\n");
	}
}

int	main(int argc, char **argv)
{
	int	n;
	int	*constraint;
	int	*grid;
	int	is_failure;

	if (argc != 2)
		return (0);
	constraint = input_parsing(argv[1], &n);
	if (constraint == NULL)
		return (0);
	printf("Contraint: \n");
	print_constraint(constraint, n);
	printf("%d X %d\n", n, n);
	is_failure = 0;
	grid = build_empty_grid(n);
	grid = prefill_grid(grid, constraint, n);
	grid = solve_sky_scraper(grid, constraint, n, &is_failure);
	if (grid == NULL)
	{
		free(constraint);
		return (-1);
	}
	printf("\n");
	printf("Solved: \n");
	print_grid(grid, n);
	free(constraint);
	free(grid);
	return (0);

}

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main (int argc,char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = argc-1;
	while (argv[j][i] != '\0' && argc && j > 0)
	{	
		while (argv[j][i] != '\0' && argc)
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		i = 0;
        ft_putchar('\n');
		j--;
	}
}
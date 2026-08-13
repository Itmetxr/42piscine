#include <stdio.h>
#include <stdlib.h>

int	get_size(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i]) // size, 
	{
		if (str[i] >= '0' && str[i] <= '9') // char num
			size++;
		else
			return (-1);
		i++;
		if (str[i] == '\0') // end
			break;
		if (str[i] != ' ') // space check
			return (-1);
		i++;
	}
	return (size);
}

int	*assign_num(char *str, int *r)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i]) // size, 
	{
		if (str[i] >= '0' && str[i] <= '9') // char num
		{
			r[j] = str[i] - '0';
			j++;
		}
		else
			return (NULL);
		i++;
		if (str[i] == '\0') // end
			break;
		if (str[i] != ' ') // space check
			return (NULL);
		i++;
	}
	return (r);
}

int	*input_parsing(char *str, int *n)
{
	int	*r;
	int	size;

	r = NULL;
	size = get_size(str);
	if (size == -1 || size % 4 != 0)
		return (NULL);
	*n = size / 4;
	printf("size: %d\n", size); //

	r = malloc(sizeof(int) * size);
	if (r == NULL)
		return (NULL);
	if (assign_num(str, r) == NULL)
	{
		free(r);
		return (NULL);
	}
	return (r);
}

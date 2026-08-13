
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		lenght;

	lenght = 0;
	while (src[lenght])
		lenght++;

	dest = (char *) malloc(sizeof(char) * (lenght + 1));

	if (dest == NULL)
		return (NULL);
	i = 0;

	while (i < lenght)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char *src = "string";
	char *copy;

	copy = ft_strdup(src);
	if (copy == NULL)
		return (1);

	printf("My: %s\n", copy);
	free(copy);

	return (0);
}
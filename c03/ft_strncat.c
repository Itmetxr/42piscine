char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
#include<stdio.h>
int	main(void)
{
	char	dest[10] = "Hellooo";
	char	src[10] = "World";
	int	n = 2;

	ft_strncat(dest, src, n);
	printf("%s", dest);
} 
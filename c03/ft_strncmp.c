int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
#include<stdio.h>
int	main()
{
	char s1[] = "hello";
	char s2[] = "HELlo";
	int n = 2;
	printf("%d\n", ft_strncmp(s1, s2, n));
}
int	ft_prime(int nb)
{
	int	i;

	if (nb < 1)
		return (0);
	if (nb == 2)
		return (nb);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (nb);
}

int	ft_next_prime(int nb)
{
	while (ft_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
// #include<stdio.h>
// int	main(void)
// {
// 	printf("%d\n",ft_next_prime(2));
// 	printf("%d\n",ft_next_prime(3));
// 	printf("%d\n",ft_next_prime(11));
// 	printf("%d\n",ft_next_prime(12));
// 	printf("%d\n",ft_next_prime(21));
// 	printf("%d\n",ft_next_prime(26));
// 	printf("%d\n",ft_next_prime(7));
// 	printf("%d",ft_next_prime(4));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 16:50:18 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/14 18:42:42 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	s;
	int	temp;
	int	j;

	s = size - 1;
	i = 0;
	j = 0;
	while (j < s)
	{
		while (i < s)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		i = 0;
		j++;
	}
}
// int	main(void)
// {
// 	int arr[] = {9, 8, 7, 6, 5, 4, 3};
// 	int length = sizeof(arr) / sizeof(arr[0]);
// 	printf("arr before: ");
// 	for (int i = 0; i < length; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");
// 	printf("arr after: ");
// 	ft_sort_int_tab(arr, length);
// 	for (int i = 0; i < length; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// }

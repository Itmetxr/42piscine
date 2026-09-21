/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 16:49:58 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/14 18:35:08 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	s;
	int	temp;

	s = size - 1;
	i = 0;
	while (i < s)
	{
		temp = tab[i];
		tab[i] = tab[s];
		tab[s] = temp;
		i++;
		s--;
	}
}
// int	main(void)
// {
// 	int arr[] = {1, 2, 3, 4, 5, 6, 7};
// 	int length = sizeof(arr) / sizeof(arr[0]);
// 	printf("arr before: ");
// 	for (int i = 0; i < length; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");
// 	printf("arr after: ");
// 	ft_rev_int_tab(arr, length);
// 	for (int i = 0; i < length; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// }

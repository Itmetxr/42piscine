/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 16:34:29 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/14 18:22:49 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
// #include <stdio.h>
// int main()
// {
// 	int x,y;
// 	printf("number1:");
// 	scanf("%d",&x);
// 	printf("number2:");
// 	scanf("%d",&y);
// 	printf("\nBefore number1: %d number2: %d",x,y);
// 	ft_swap(&x, &y);
// 	printf("\nAfter number1: %d number2: %d",x,y);

// }

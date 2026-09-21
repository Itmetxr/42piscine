/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 16:48:46 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/14 18:26:59 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
// #include <stdio.h>
// int main()
// {
// 	int x,y;
// 	printf("number1:");
// 	scanf("%d",&x);
// 	printf("number2:");
// 	scanf("%d",&y);	
//     printf("\ndiv = %d / %d ",x,y);
//     printf("\nmod = %d %% %d ",x,y);
//     ft_ultimate_div_mod(&x,&y);
//     printf("\nresult div :  %d",x);
//     printf("\nresult mod :  %d",y);	
// }

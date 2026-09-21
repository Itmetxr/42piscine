/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 16:47:35 by nukanjan          #+#    #+#             */
/*   Updated: 2026/07/14 18:23:48 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// #include <stdio.h>
// int main()
// {
// 	int x,y,w,z;
// 	printf("number1:");
// 	scanf("%d",&x);
// 	printf("number2:");
// 	scanf("%d",&y);	
//     ft_div_mod(x,y,&w,&z);
// 	printf("\ndiv = %d / %d = %d",x,y,w);
// 	printf("\nmod = %d %% %d = %d",x,y,z);
// }

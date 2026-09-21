/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 16:09:06 by nukanjan          #+#    #+#             */
/*   Updated: 2026/08/26 16:09:07 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d",ft_isascii(123));
// 	printf("%d",ft_isascii('a'));
// 	printf("%d",ft_isascii('1'));
// 	printf("%d",ft_isascii('23'));
// }
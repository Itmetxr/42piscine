/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 16:09:20 by nukanjan          #+#    #+#             */
/*   Updated: 2026/08/26 16:09:21 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d",ft_isalnum('S'));
// 	printf("%d",ft_isalnum('5'));
// 	printf("%d",ft_isalnum('s'));
// 	printf("%d",ft_isalnum(238));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 16:09:13 by nukanjan          #+#    #+#             */
/*   Updated: 2026/08/26 16:58:42 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d",ft_isalpha('S'));
// 	printf("%d",ft_isalpha('A5'));
// 	printf("%d",ft_isalpha('s'));
// 	printf("%d",ft_isalpha(238));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 16:08:56 by nukanjan          #+#    #+#             */
/*   Updated: 2026/08/26 16:08:57 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	else
		return (1);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d",ft_isprint('\n'));
// 	printf("%d",ft_isprint('A'));
// 	printf("%d",ft_isprint('s'));
// 	printf("%d",ft_isprint(38));
// }
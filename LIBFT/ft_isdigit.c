/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 16:09:01 by nukanjan          #+#    #+#             */
/*   Updated: 2026/08/26 16:09:02 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d",ft_isdigit(123));
// 	printf("%d",ft_isdigit('asdfghmaASSSS'));
// 	printf("%d",ft_isdigit('1'));
// }
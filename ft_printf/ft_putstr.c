/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 13:54:12 by nukanjan          #+#    #+#             */
/*   Updated: 2026/11/18 16:55:40 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (write(1, str, len));
}

//int main()
//{
//	ft_putstr("Hello, World!\n");
//}
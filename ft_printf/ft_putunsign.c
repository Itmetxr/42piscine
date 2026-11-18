/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 13:55:12 by nukanjan          #+#    #+#             */
/*   Updated: 2026/11/18 17:12:24 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsign(unsigned int n)
{
	int	res;

	res = 0;
	if (n >= 10)
		res += ft_putunsign(n / 10);
	res += ft_putchar(n % 10 + '0');
	return (res);
}

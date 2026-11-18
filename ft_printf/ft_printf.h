/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 13:52:10 by nukanjan          #+#    #+#             */
/*   Updated: 2026/11/18 17:50:49 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_format(const char *format, va_list args);
int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *str);
int	ft_putnbr(int n);
int	ft_puthex(unsigned long n, char c);
int	ft_putunsign(unsigned int n);
int	ft_putpointer(unsigned long n);

#endif
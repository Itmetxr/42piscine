/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:42:39 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/18 15:31:50 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	unsigned char	*x;
	int				sign;
	int				result;

	sign = 1;
	x = (unsigned char *)nptr;
	while ((*x == '\t') || (*x == '\n') || (*x == '\v')
		|| (*x == '\f') || (*x == '\r') || (*x == ' '))
		x++;
	if (*x == '-' || *x == '+')
	{
		if (*x == '-')
			sign = -1;
		x++;
	}
	result = 0;
	while (*x >= '0' && *x <= '9')
	{
		result = (result * 10) + (*x - '0');
		x++;
	}
	return (result * sign);
}

//int main() {
//    char str1[] = " -42";
//    char str2[] = "12345nukanjan";
//    char str3[] = "Hello 123";
//    int num1 = ft_atoi(str1);
//    int num2 = ft_atoi(str2);
//    int num3 = ft_atoi(str3);
//    printf("result1: %d\n", num1);
//    printf("result2: %d\n", num3);
//    printf("result3: %d\n", num2);
//    return 0;
//}
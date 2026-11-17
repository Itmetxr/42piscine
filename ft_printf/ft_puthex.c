#include "ft_printf.h"

void ft_puthex(unsigned int n,char c)
{
	char hex[16] = "0123456789abcdef";
	if (n >= 16)
		ft_puthex(n / 16,c);
	if (c == 'X')
		ft_putchar(hex[n % 16] - 32);
	else
		ft_putchar(hex[n % 16]);
}

//int main()
//{
//	unsigned int num = 255;
//	ft_puthex(num,'x');
//	ft_puthex(num,'X');
//	return 0;
//}
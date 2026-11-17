#include "ft_printf.h"

void ft_putpointer(unsigned long n)
{
	ft_putstr("0x");
	ft_puthex(n,'x');
}

//int main()
//{
//	unsigned long num = 1234;
//	ft_putpointer(num);
//	return 0;
//}
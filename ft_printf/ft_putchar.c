#include "ft_printf.h"

int ft_putchar(char c)
{
    return write(1, &c, 1);
}

//int main()
//{
//	ft_putchar('%');
//}
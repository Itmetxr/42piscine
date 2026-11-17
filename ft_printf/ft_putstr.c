#include "ft_printf.h"

int ft_putstr(const char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return write(1, str, len);
}

//int main()
//{
//	ft_putstr("Hello, World!\n");
//}
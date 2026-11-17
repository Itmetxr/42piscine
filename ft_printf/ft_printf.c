#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    ft_format(format, args);
    va_end(args);
    return 0;
}

int main()
{
	ft_printf("hello World\n");
	ft_printf("%d %i\n",10,-10);
	ft_printf("%u \n",42);
	ft_printf("%p\n", (void*)0x7ff8c0);
	ft_printf("%x %X\n", 255, 255);
	ft_printf("%c\n", 'H');
}

#include <stdarg.h>
#include "ft_printf.h"
int ft_printf(const char *format, ...) 
{
    int count;
    int tmp;
    va_list args;

    va_start(args, format);
    count = 0;
    while (*format)
    {
        if (*format == '%') 
        {
            format++;
            tmp = count;
            count += handle_format(&format, args);
            if(tmp == count)
                count += handle_error(format);
            else if(tmp > count)
                count++;
        } 
        else 
            count += ft_putchar(*format);
        format++;
    }

    va_end(args);
    return count;
}


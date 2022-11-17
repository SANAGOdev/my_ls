/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** printer
*/

#include "../include/my.h"

int my_printf(const char* format, ...)
{
    va_list list;
    va_start(list, format);

    for (int i = 0; i < my_strlen(format); i++) {
        i = conditions01(format, i, list);
    }
    va_end(list);
    return 0;
}

int conditions01(const char* format, int i, va_list list)
{
        if (format[i] == '%' && format[i + 1] == 's')
            my_putstr(va_arg(list, char *));
        if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
            my_put_nbr(va_arg(list, int));
        if (format[i] == '%' && format[i + 1] == 'c')
            my_putchar((char) va_arg(list, int));
        if (format[i] == '%' && format[i + 1] == '%')
            my_putchar('%');
        if (format[i] != '%')
            my_putchar(format[i]);
        else
            i += 1;
    return i;
}

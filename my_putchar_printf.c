/*
** EPITECH PROJECT, 2024
** putchar with va_args
** File description:
** putchar with va_args
*/

#include "include/my.h"

int my_putchar_printf(va_list list, bool)
{
    char c = va_arg(list, int);

    my_putchar(c);
    return 0;
}

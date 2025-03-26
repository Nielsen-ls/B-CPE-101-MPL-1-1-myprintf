/*
** EPITECH PROJECT, 2024
** my_putstr with va_arg
** File description:
** my_putstr with va_arg
*/

#include "include/my.h"

int my_putstr_printf(va_list list, bool)
{
    char const *str = va_arg(list, char *);

    my_putstr(str);
    return 0;
}

/*
** EPITECH PROJECT, 2024
** putscientific with va args for uppercase
** File description:
** putscientific with va args for uppercase
*/

#include "include/my.h"

int my_putscientific_uppercase(va_list list, bool)
{
    double f = va_arg(list, double);

    my_putscientific(f, 1, 6);
    return 0;
}

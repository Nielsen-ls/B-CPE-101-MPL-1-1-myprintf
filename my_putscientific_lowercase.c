/*
** EPITECH PROJECT, 2024
** putscientific with va args for lowercase
** File description:
** putscientific with va args for lowercase
*/

#include "include/my.h"

int my_putscientific_lowercase(va_list list, bool)
{
    double f = va_arg(list, double);

    my_putscientific(f, 0, 6);
    return 0;
}

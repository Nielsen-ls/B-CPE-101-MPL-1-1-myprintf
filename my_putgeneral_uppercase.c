/*
** EPITECH PROJECT, 2024
** putgeneral with va args for uppercase
** File description:
** putgeneral with va args for uppercase
*/

#include "include/my.h"

int my_putgeneral_uppercase(va_list list, bool)
{
    double f = va_arg(list, double);

    my_putgeneral(f, 1);
    return 0;
}

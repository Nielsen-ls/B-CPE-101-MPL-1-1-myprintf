/*
** EPITECH PROJECT, 2024
** putgeneral with va args for lowercase
** File description:
** putgeneral with va args for lowercase
*/

#include "include/my.h"

int my_putgeneral_lowercase(va_list list, bool)
{
    double f = va_arg(list, double);

    my_putgeneral(f, 0);
    return 0;
}

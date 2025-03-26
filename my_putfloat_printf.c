/*
** EPITECH PROJECT, 2024
** putfloat with va rags
** File description:
** putfloat with va rags
*/

#include "include/my.h"

int my_putfloat_printf(va_list list, bool add_sign)
{
    double f = va_arg(list, double);

    if (add_sign && f >= 0.) {
        my_putchar('+');
    }
    my_putfloat(f, 6);
    return 0;
}

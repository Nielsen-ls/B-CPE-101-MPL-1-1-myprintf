/*
** EPITECH PROJECT, 2024
** putnbr with arg
** File description:
** put nbr with va_arg
*/

#include "include/my.h"

int my_put_nbr_printf(va_list list, bool add_sign)
{
    int nb = va_arg(list, int);

    if (add_sign && nb >= 0) {
        my_putchar('+');
    }
    my_put_nbr(nb);
    return 0;
}

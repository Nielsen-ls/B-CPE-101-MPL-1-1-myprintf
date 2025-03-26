/*
** EPITECH PROJECT, 2024
** hexadecimal min
** File description:
** hexadecimal min
*/

#include "include/my.h"

int my_hexa_min_printf(va_list list, bool)
{
    int nb;

    nb = va_arg(list, int);
    my_putnbr_base(nb, "0123456789abcdef");
    return 0;
}

/*
** EPITECH PROJECT, 2024
** hexadecimal
** File description:
** hexadecimal
*/

#include "include/my.h"

int my_hexa_printf(va_list list, bool)
{
    int nb;

    nb = va_arg(list, int);
    my_putnbr_base(nb, "0123456789ABCDEF");
    return 0;
}

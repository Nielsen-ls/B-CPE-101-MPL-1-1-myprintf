/*
** EPITECH PROJECT, 2024
** octal
** File description:
** octal
*/

#include "include/my.h"

int my_octet_printf(va_list list, bool)
{
    int nb = va_arg(list, int);

    my_putnbr_base(nb, "01234567");
    return 0;
}

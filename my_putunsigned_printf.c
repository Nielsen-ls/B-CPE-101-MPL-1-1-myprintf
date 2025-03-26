/*
** EPITECH PROJECT, 2024
** putunsigned with va_args
** File description:
** putunsigned with va_args
*/

#include "include/my.h"

int my_putunsigned_printf(va_list list, bool)
{
    unsigned int n = va_arg(list, int);

    my_putunsigned(n);
    return 0;
}

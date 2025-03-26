/*
** EPITECH PROJECT, 2024
** my_putpointer with va_args
** File description:
** my_putpointer with va_args
*/

#include "include/my.h"

int my_put_pointer_printf(va_list list, bool)
{
    void *ptr = va_arg(list, void *);

    my_put_pointer(ptr);
    return 0;
}

/*
** EPITECH PROJECT, 2024
** my_putunsigned
** File description:
** my_printf
*/

#include "include/my.h"

int my_putunsigned(unsigned int n)
{
    if (n >= 10) {
        my_putunsigned(n / 10);
    }
    my_putchar(n % 10 + '0');
    return 0;
}

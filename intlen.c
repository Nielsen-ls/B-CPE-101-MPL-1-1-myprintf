/*
** EPITECH PROJECT, 2024
** my_putfloat
** File description:
** my_printf
*/

#include "include/my.h"

int intlen(int n)
{
    int len = 0;

    if (n == 0)
    return 1;
    if (n < 0)
    n = n * (-1);
    while (n > 1) {
        n /= 10;
        len++;
    }
    len++;
    return len;
}

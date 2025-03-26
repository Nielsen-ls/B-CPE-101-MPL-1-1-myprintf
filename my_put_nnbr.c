/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "include/my.h"

int my_put_nnbr(int nb, int limit)
{
    int buff = nb;
    int len = 0;
    int div;
    int number;

    while (buff != 0) {
        buff /= 10;
        len++;
    }
    if (limit > len)
        limit = len;
    for (int i = limit; i > 0; i--) {
        div = my_compute_power_it(10, i);
        number = (nb / div) % 10;
        my_putchar('0' + number);
    }
    return 0;
}

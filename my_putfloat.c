/*
** EPITECH PROJECT, 2024
** my_putfloat
** File description:
** my_printf
*/

#include "include/my.h"

int my_putfloat(double f, int nb)
{
    int num = (int)f;
    int len = my_compute_power_it(10, nb + 1);
    int decimal = (int)((f - num) * len);

    my_put_nbr(num);
    my_putchar('.');
    if (decimal < 10) {
        my_putchar('0');
    }
    for (int j = 0; j < 10; j++) {
        if ((decimal - j) % 10 == 0 && j >= 5) {
            decimal = decimal + 10 - j;
            decimal = decimal + j;
        }
    }
    my_put_nnbr(decimal, nb);
    return 0;
}

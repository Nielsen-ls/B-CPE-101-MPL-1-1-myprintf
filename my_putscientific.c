/*
** EPITECH PROJECT, 2024
** my_putscientific
** File description:
** my_printf
*/

#include "include/my.h"

static void condition_putscientific(double f, int exp, int uppercase, int nb)
{
    my_putfloat(f, nb);
    if (uppercase == 1) {
        my_putchar('E');
    } else {
        my_putchar('e');
    }
    if (exp >= 0) {
        my_putchar('+');
    } else {
        my_putchar('-');
        exp = -exp;
    }
    if (exp < 10) {
        my_putchar('0');
    }
    my_put_nbr(exp);
}

int my_putscientific(double f, int uppercase, int nb)
{
    int exp = 0;

    if (f != 0.0) {
        while (f >= 10.0) {
            f /= 10.0;
            exp++;
        }
        while (f > 0 && f < 1.0) {
            f *= 10.0;
            exp--;
        }
    }
    condition_putscientific(f, exp, uppercase, nb);
    return 0;
}

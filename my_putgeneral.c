/*
** EPITECH PROJECT, 2024
** my_printf
** File description:
** flag G
*/

#include "include/my.h"

int my_putgeneral(double f, int uppercase)
{
    int int_part = (int)f;
    int exp = 0;
    double temp = f;

    if (f == 0.0) {
        my_put_nbr(int_part);
        return 0;
    }
    if (temp < 1.0)
        for (; temp < 1.0; temp *= 10)
            exp--;
    if (temp >= 10.0) {
        for (; temp >= 10.0; temp /= 10)
            exp++;
    }
    if (exp >= -4 && exp < 6)
        my_putfloat(f, 6);
    else
        my_putscientific(f, uppercase, 5);
    return (0);
}

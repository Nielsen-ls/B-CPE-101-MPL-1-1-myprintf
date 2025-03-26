/*
** EPITECH PROJECT, 2024
** int to octal
** File description:
** my_put_nbr_base
*/

#include "include/my.h"

int my_putnbr_base(int nbr, char *base)
{
    int calcul = 0;
    int size = my_strlen(base);
    int nombre = 0;
    int buff;

    if (nbr < 0) {
        nombre += my_putchar('-');
        nombre += my_putnbr_base(- nbr, base);
    } else {
        buff = nbr % size;
        calcul = (nbr - buff) / size;
        if (calcul != 0)
            my_putnbr_base(calcul, base);
        nombre = my_putchar(base[buff]);
    }
    return nombre;
}

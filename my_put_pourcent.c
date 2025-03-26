/*
** EPITECH PROJECT, 2024
** write a pourcent
** File description:
** write a pourcent
*/

#include "include/my.h"

int my_put_pourcent(__attribute__((unused))va_list list, bool)
{
    char c = 37;

    write(1, &c, 1);
    return 0;
}

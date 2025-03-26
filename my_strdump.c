/*
** EPITECH PROJECT, 2024
** putnbr with arg
** File description:
** put nbr with va_arg
*/

#include "include/my.h"

char *my_strdump(char *s1)
{
    int i = 0;
    int len = my_strlen(s1);
    char *result = malloc(sizeof(char) * (len + 1));

    while (s1[i] != '\0') {
        result[i] = s1[i];
        i++;
    }
    return result;
}

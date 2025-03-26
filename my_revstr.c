/*
** EPITECH PROJECT, 2024
** task03
** File description:
** Day06 task03
*/

#include "include/my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = my_strlen(str) - 1;
    int len = my_strlen(str);
    char tempo;

    for (; i != len / 2; i++) {
        tempo = str[i];
        str[i] = str[j];
        str[j] = tempo;
        j--;
    }
    return str;
}

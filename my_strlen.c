/*
** EPITECH PROJECT, 2024
** task03
** File description:
** Day04 task03
*/

#include "include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}

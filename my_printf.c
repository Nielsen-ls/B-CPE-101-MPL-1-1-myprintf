/*
** EPITECH PROJECT, 2024
** myprintf
** File description:
** myprintf
*/

#include "include/my.h"

const FlagStruct_t letter[] = {
    {"d", &my_put_nbr_printf, 1},
    {"i", &my_put_nbr_printf, 1},
    {"o", &my_octet_printf, 1},
    {"x", &my_hexa_min_printf, 1},
    {"X", &my_hexa_printf, 1},
    {"u", &my_putunsigned_printf, 1},
    {"c", &my_putchar_printf, 1},
    {"s", &my_putstr_printf, 1},
    {"f", &my_putfloat_printf, 1},
    {"e", &my_putscientific_lowercase, 1},
    {"E", &my_putscientific_uppercase, 1},
    {"g", &my_putgeneral_lowercase, 1},
    {"G", &my_putgeneral_uppercase, 1},
    {"p", &my_put_pointer_printf, 1},
    {"%%", &my_put_pourcent, 1},
    {0, NULL, 0},
};

int find_flag(const char *str, va_list list, bool plus_flag)
{
    for (int i = 0; letter[i].len != 0; i++) {
        if (my_strncmp(str, letter[i].str, 0) == 0)
            letter[i].fun(list, plus_flag);
    }
    return 0;
}

bool find_plus(char character, int *i)
{
    if (character == '+') {
        (*i)++;
        return true;
    }
    return false;
}

int my_printf(const char *format, ...)
{
    va_list list;
    bool plus_flag = false;

    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            plus_flag = find_plus(format[i], &i);
            find_flag((char *)(format + i), list, plus_flag);
        } else {
            my_putchar(format[i]);
        }
    }
    va_end(list);
    return 0;
}

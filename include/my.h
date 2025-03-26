/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** my.h
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdbool.h>

#ifndef MY_H
    #define MY_H

typedef struct FlagStruct {
    char *str;
    int (*fun)(va_list, bool);
    int len;
} FlagStruct_t;

int my_strncmp(char const *s1, char const *s2, int n);
int my_putnbr_base(int nbr, char *base);
int my_hexa_printf(va_list list, bool);
int my_hexa_min_printf(va_list list, bool);
int my_octet_printf(va_list list, bool);
int my_strlen(char const *str);
char *my_revstr(char *str);
int my_putchar(char c);
int my_putchar_printf(va_list list, bool);
int my_put_nbr(int nb);
int my_put_nbr_printf(va_list list, bool add_sign);
int my_putstr(char const *str);
int my_putstr_printf(va_list list, bool);
int my_put_pourcent(__attribute__((unused))va_list list, bool);
int my_putunsigned(unsigned int n);
int my_putunsigned_printf(va_list list, bool);
int my_putfloat(double f, int nb);
int my_putfloat_printf(va_list list, bool);
int my_putscientific(double f, int uppercase, int nb);
int my_putscientific_uppercase(va_list list, bool);
int my_putscientific_lowercase(va_list list, bool);
void my_put_pointer(void *ptr);
int my_put_pointer_printf(va_list list, bool);
int my_putgeneral(double f, int uppercase);
int my_putgeneral_lowercase(va_list list, bool);
int my_putgeneral_uppercase(va_list list, bool);
int intlen(int n);
int my_compute_power_it(int nb, int p);
int my_put_nnbr(int nb, int limit);
int my_printf(const char *format, ...);

#endif /* MY_H */

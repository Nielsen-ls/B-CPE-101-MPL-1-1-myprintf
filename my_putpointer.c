/*
** EPITECH PROJECT, 2024
** my_putpointer
** File description:
** my_printf
*/

#include "include/my.h"

static void my_put_hexa_mini(unsigned long n)
{
    char *digits = "0123456789abcdef";

    if (n >= 16) {
        my_put_hexa_mini(n / 16);
    }
    my_putchar(digits[n % 16]);
}

void my_put_pointer(void *ptr)
{
    unsigned long address = (unsigned long)ptr;

    my_putstr("0x");
    if (address == 0) {
        my_putstr("0");
    } else {
        my_put_hexa_mini(address);
    }
    return;
}

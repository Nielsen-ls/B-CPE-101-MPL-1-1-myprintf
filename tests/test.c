/*
** EPITECH PROJECT, 2024
** tests_unitaire
** File description:
** my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, test_strings, .init = redirect_all_stdout)
{
    my_printf("Hello %s", "world");
    cr_assert_stdout_eq_str("Hello world");
}

Test(my_printf, test_integers, .init = redirect_all_stdout)
{
    my_printf("%d", 42);
    cr_assert_stdout_eq_str("42");
}

Test(my_printf, test_integers_param, .init = redirect_all_stdout)
{
    int d = 5;

    my_printf("%d", d);
    cr_assert_stdout_eq_str("5");
}

Test(my_printf, test_integers_param_format_plus, .init = redirect_all_stdout)
{
    int d = 5;

    my_printf("%+d", d);
    cr_assert_stdout_eq_str("+5");
}

Test(my_printf, my_printf_test_integers_param_format_plus_negative, .init = redirect_all_stdout)
{
    int d = -5;

    my_printf("%+d", d);
    cr_assert_stdout_eq_str("-5");
}

Test(my_printf, my_printf_test_format_plus_zero, .init = redirect_all_stdout)
{
    int d = 0;

    my_printf("%+d", d);
    cr_assert_stdout_eq_str("+0");
}

Test(my_printf, my_printf_test_format_plus_negativezero, .init = redirect_all_stdout)
{
    int d = -0;

    my_printf("%+d", d);
    cr_assert_stdout_eq_str("+0");
}

Test(my_printf, test_format_plus_positive, .init = redirect_all_stdout)
{
    my_printf("%+d", 42);
    cr_assert_stdout_eq_str("+42");
}

Test(my_printf, test_format_plus_negative, .init = redirect_all_stdout)
{
    my_printf("%+d", -42);
    cr_assert_stdout_eq_str("-42");
}


Test(my_printf, test_negative_integers, .init = redirect_all_stdout)
{
    my_printf("%d", -42);
    cr_assert_stdout_eq_str("-42");
}

Test(my_printf, test_unsigned_integers, .init = redirect_all_stdout)
{
    my_printf("%u", 12345);
    cr_assert_stdout_eq_str("12345");
}

Test(my_printf, test_unsigned_negative_integers, .init = redirect_all_stdout)
{
    my_printf("%u", -12345);
    cr_assert_stdout_eq_str("4294954951");
}

Test(my_printf, test_hexadecimal, .init = redirect_all_stdout)
{
    my_printf("%x", 255);
    cr_assert_stdout_eq_str("ff");
}

Test(my_printf, test_char, .init = redirect_all_stdout)
{
    my_printf("%c", 'A');
    cr_assert_stdout_eq_str("A");
}

Test(my_printf, test_percentage, .init = redirect_all_stdout)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, test_float, .init = redirect_all_stdout)
{
    my_printf("%f", 3.141592);
    cr_assert_stdout_eq_str("3.141592");
}

Test(my_printf, test_empty_string, .init = redirect_all_stdout)
{
    my_printf("");
    cr_assert_stdout_eq_str("");
}

Test(my_printf, test_only_percentage, .init = redirect_all_stdout)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, test_string_with_percentage, .init = redirect_all_stdout)
{
    my_printf("Value: %d%%", 100);
    cr_assert_stdout_eq_str("Value: 100%");
}

Test(my_printf, test_long_string, .init = redirect_all_stdout)
{
    my_printf("This is a very long string to test the output functionality of my_printf.");
    cr_assert_stdout_eq_str("This is a very long string to test the output functionality of my_printf.");
}

Test(my_printf, test_float_with_plus_flag, .init = redirect_all_stdout)
{
    my_printf("%+f", 3.14159);
    cr_assert_stdout_eq_str("+3.141590");
}

Test(my_printf, test_hexadecimal_uppercase, .init = redirect_all_stdout)
{
    my_printf("%X", 255);
    cr_assert_stdout_eq_str("FF");
}

Test(my_printf, test_character, .init = redirect_all_stdout)
{
    my_printf("%c", 'B');
    cr_assert_stdout_eq_str("B");
}

Test(my_printf, test_no_format_specifier, .init = redirect_all_stdout)
{
    my_printf("Just a string with no format.");
    cr_assert_stdout_eq_str("Just a string with no format.");
}

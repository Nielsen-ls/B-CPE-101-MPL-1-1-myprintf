/*
** EPITECH PROJECT, 2024
** task03
** File description:
** Day05 task03
*/

int my_compute_power_it(int nb, int p)
{
    int nm = nb;

    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    for (; p > 1; p--)
        nm = nm * nb;
    return nm;
}

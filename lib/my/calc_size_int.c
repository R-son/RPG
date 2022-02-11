/*
** EPITECH PROJECT, 2020
** calc_size_int.c
** File description:
** calc 'size' of int (nb of nb)
*/

int calc_size_int(int nb)
{
    int nb_ac = 1;
    int test_nb = 9;
    int rest = nb;

    while (rest >= 0) {
        if ((rest = nb - test_nb) > 0)
            nb_ac++;
        test_nb = (test_nb * 10) + 9;
    }
    return (nb_ac);
}

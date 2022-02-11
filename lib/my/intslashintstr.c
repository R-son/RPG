/*
** EPITECH PROJECT, 2020
** intslashintstr.c
** File description:
** intslashintstr
*/

#include "stdlib.h"
#include "my.h"

char *add_nb1(char *s_nb, int nb1, int nb_ac1)
{
    int chiffre = 0;
    int x1 = 1;

    for (int count = 0; count != nb_ac1; count++) {
        chiffre = nb1 / my_compute_power_it(10, (nb_ac1 - x1));
        nb1 = nb1 - chiffre * my_compute_power_it(10, (nb_ac1 - x1));
        x1++;
        s_nb[count] = chiffre + '0';
    }
    return (s_nb);
}

char *add_nb2(char *s_nb, int nb2, int nb_ac1, int nb_ac2)
{
    int chiffre = 0;
    int x2 = 1;

    for (int count = nb_ac1 + 1; count != (nb_ac1 + nb_ac2 + 1); count++) {
        chiffre = nb2 / my_compute_power_it(10, (nb_ac2 - x2));
        nb2 = nb2 - chiffre * my_compute_power_it(10, (nb_ac2 - x2));
        x2++;
        s_nb[count] = chiffre + '0';
    }
    return (s_nb);
}

char *intslashintstr(int nb1, int nb2, char *s_nb)
{
    int nb_ac1 = 0;
    int nb_ac2 = 0;

    nb_ac1 = calc_size_int(nb1);
    nb_ac2 = calc_size_int(nb2);
    s_nb = malloc(sizeof(char) * (nb_ac1 + nb_ac2 + 2));
    s_nb = add_nb1(s_nb, nb1, nb_ac1);
    s_nb[nb_ac1] = '/';
    s_nb = add_nb2(s_nb, nb2, nb_ac1, nb_ac2);
    s_nb[nb_ac1 + nb_ac2 + 1] = '\0';
    return (s_nb);
}

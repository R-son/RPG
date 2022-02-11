/*
** EPITECH PROJECT, 2020
** verif_env.c
** File description:
** verif_env
*/

#include "my.h"

int verif_env(char **env)
{
    for (int c = 0; env[c] != NULL; c++)
        if (modif_strcmp(env[c], "DISPLAY=") == 0)
            return (0);
    return (-1);
}

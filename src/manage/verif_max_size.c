/*
** EPITECH PROJECT, 2020
** verif_max_size.c
** File description:
** verif_max_size
*/

#include "my.h"

int verif_max_size_volcano(sfSprite *s_monster, int nb_direction)
{
    if (sfSprite_getPosition(s_monster).y >= 835)
        nb_direction = TOP;
    if (sfSprite_getPosition(s_monster).y <= 81)
        nb_direction = BOTTOM;
    if (sfSprite_getPosition(s_monster).x >= 1640)
        nb_direction = LEFT;
    if (sfSprite_getPosition(s_monster).x <= 300)
        nb_direction = RIGHT;
    return (nb_direction);
}

int verif_max_size_city(sfSprite *s_monster, int nb_direction)
{
    if (sfSprite_getPosition(s_monster).y >= 790)
        nb_direction = TOP;
    if (sfSprite_getPosition(s_monster).y <= 227)
        nb_direction = BOTTOM;
    if (sfSprite_getPosition(s_monster).x >= 1440)
        nb_direction = LEFT;
    if (sfSprite_getPosition(s_monster).x <= 435)
        nb_direction = RIGHT;
    return (nb_direction);
}

int verif_max_size_forest(sfSprite *s_monster, int nb_direction)
{
    if (sfSprite_getPosition(s_monster).y >= 684)
        nb_direction = TOP;
    if (sfSprite_getPosition(s_monster).y <= 90)
        nb_direction = BOTTOM;
    if (sfSprite_getPosition(s_monster).x >= 1480)
        nb_direction = LEFT;
    if (sfSprite_getPosition(s_monster).x <= 350)
        nb_direction = RIGHT;
    return (nb_direction);
}

int verif_max_size_port(sfSprite *s_monster, int nb_direction)
{
    if (sfSprite_getPosition(s_monster).y >= 1000)
        nb_direction = TOP;
    if (sfSprite_getPosition(s_monster).y <= 1)
        nb_direction = BOTTOM;
    if (sfSprite_getPosition(s_monster).x >= 1600)
        nb_direction = LEFT;
    if (sfSprite_getPosition(s_monster).x <= 1)
        nb_direction = RIGHT;
    return (nb_direction);
}

int verif_max_size_snow(sfSprite *s_monster, int nb_direction)
{
    if (sfSprite_getPosition(s_monster).y >= 1000)
        nb_direction = TOP;
    if (sfSprite_getPosition(s_monster).y <= 1)
        nb_direction = BOTTOM;
    if (sfSprite_getPosition(s_monster).x >= 1870)
        nb_direction = LEFT;
    if (sfSprite_getPosition(s_monster).x <= 182)
        nb_direction = RIGHT;
    return (nb_direction);
}

/*
** EPITECH PROJECT, 2020
** create_c_clock.c
** File description:
** create c_clock
*/

#include "my.h"

sfClock *create_c_clock(void)
{
    sfClock *c_clock;

    c_clock = sfClock_create();
    return (c_clock);
}

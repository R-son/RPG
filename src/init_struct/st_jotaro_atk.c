/*
** EPITECH PROJECT, 2020
** st_joraro_atk.c
** File description:
** st_jotaro_atk
*/

#include "my.h"

void st_jotaro_atk(game *ga)
{
    ga->jo.s_ora_ora = create_ora_ora();
    ga->jo.s_star_platinium = create_star_platinium();
    ga->jo.s_star_finger = create_star_finger();
    ga->jo.s_star_breaker = create_star_breaker();
    ga->jo.s_turning_around = create_turning_around();
    ga->jo.dmg_jo = 0;
}

/*
** EPITECH PROJECT, 2020
** st_effect.c
** File description:
** st_effect
*/

#include "my.h"

void st_effect(game *ga)
{
    ga->ef.sf_turn = 0;
    ga->ef.tw_cooldown = 0;
    ga->ef.power_up = 1;
    ga->ef.power_up_use = 1;
    ga->ef.city_dmg_wait = 1;
    ga->ef.city_dmg_turn = 0;
    ga->ef.pot_button = create_potion_button();
    ga->ef.dmg_port = 1;
}

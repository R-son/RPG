/*
** EPITECH PROJECT, 2020
** st_bar.c
** File description:
** st_bar
*/

#include "my.h"

void st_bar(game *ga)
{
    ga->ba.bg_boss_heal_bar = create_bg_boss_heal_bar();
    ga->ba.front_boss_heal_bar = create_front_boss_heal_bar();
    ga->ba.bg_xp_bar = create_bg_xp_bar();
    ga->ba.front_xp_bar = create_front_xp_bar();
    ga->ba.nb_maxbar = 959;
    ga->ba.nb_maxhp = 959;
    ga->ba.nb_hp = 959;
    ga->ba.niv_xp = 99;
    ga->ba.nb_xpneed = 382;
    ga->ba.nb_xp = 0;
    ga->ba.nb_xpadd = 382;
    ga->ba.xp_txt = create_xp_txt();
    ga->ba.str_xp = "0/382";
    ga->ba.niv_txt = create_niv_txt();
    ga->ba.str_niv = "1";
    ga->ba.heal_boss_txt = create_heal_boss_txt();
    ga->ba.str_heal_boss = "959/959";
}

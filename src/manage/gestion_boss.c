/*
** EPITECH PROJECT, 2020
** gestion_boss_turn.c
** File description:
** gestion boss turn
*/

#include "my.h"

void gestion_heal_jo(game *ga)
{
    if (ga->fm.nb_hp_jo <= 0)
        ga->fm.nb_hp_jo = 0;
    if (ga->fm.nb_hp_jo <= ga->fm.nb_maxhp_jo / 8
        && ga->ef.power_up_use == 1) {
        ga->ef.power_up = 2;
        ga->ef.power_up_use = 0;
        ga->fm.nb_hp_jo += ga->fm.nb_maxhp_jo / 2;
    }
    ga->fm.str_heal_jo = intslashintstr
        (ga->fm.nb_hp_jo, ga->fm.nb_maxhp_jo, ga->fm.str_heal_jo);
    sfText_setString(ga->fm.heal_jo_txt, ga->fm.str_heal_jo);
    sfSprite_setTextureRect
        (ga->fm.front_jo_heal_bar, (sfIntRect){0, 0, ga->fm.nb_hp_jo, 62});
}

void gestion_boss(game *ga, int dmg_boss)
{
    switch (dmg_boss) {
    case DMG_BOSS1:
        gestion_boss_volcano(ga);
        break;
    case DMG_BOSS2:
        gestion_boss_city(ga);
        break;
    case DMG_BOSS3:
        gestion_boss_forest(ga);
        break;
    case DMG_BOSS4:
        gestion_boss_port(ga);
        break;
    case DMG_BOSS5:
        gestion_boss_snow(ga);
        break;
    default:
        break;
    }
}

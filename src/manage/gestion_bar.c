/*
** EPITECH PROJECT, 2020
** gestion_bar.c
** File description:
** gestion bar interface
*/

#include "my.h"

void gestion_hp_jo(game *ga)
{
    if (ga->fm.nb_hp_jo <= 0)
        ga->fm.nb_hp_jo = 0;
    if (ga->fm.nb_hp_jo > 382)
        ga->fm.nb_hp_jo = 382;
    ga->fm.str_heal_jo = intslashintstr
        (ga->fm.nb_hp_jo, ga->fm.nb_maxhp_jo, ga->fm.str_heal_jo);
    sfText_setString(ga->fm.heal_jo_txt, ga->fm.str_heal_jo);
    sfSprite_setTextureRect
        (ga->fm.front_jo_heal_bar, (sfIntRect) {0, 0, ga->fm.nb_hp_jo, 62});
    if (ga->fm.nb_hp_jo <= 0)
        ga->fm.nb_hp_jo = 0;
}

void gestion_heal(game *ga)
{
    ga->ba.str_heal_boss = intslashintstr
        (ga->ba.nb_hp, ga->ba.nb_maxhp, ga->ba.str_heal_boss);
    sfText_setString(ga->ba.heal_boss_txt, ga->ba.str_heal_boss);
    sfSprite_setTextureRect
        (ga->ba.front_boss_heal_bar, (sfIntRect) {0, 0, ga->ba.nb_hp, 44});
    if (ga->ba.nb_hp <= 0)
        ga->ba.nb_hp = 0;
}

void calc_nb_xp(game *ga)
{
    if (ga->ba.nb_xp > 382)
        ga->ba.nb_xp = ga->ba.nb_xp - 382;
}

void gestion_xp(game *ga)
{
    if (ga->ba.nb_xp >= ga->ba.nb_xpneed) {
        ga->ba.niv_xp++;
        calc_nb_xp(ga);
    }
    sfSprite_setTextureRect
        (ga->ba.front_xp_bar, (sfIntRect) {0, 0, ga->ba.nb_xp, 62});
    ga->ba.str_xp = intslashintstr
        (ga->ba.nb_xp, ga->ba.nb_xpneed, ga->ba.str_xp);
    sfText_setString(ga->ba.xp_txt, ga->ba.str_xp);
    ga->ba.str_niv = my_inttostr(ga->ba.niv_xp, ga->ba.str_niv);
    sfText_setString(ga->ba.niv_txt, ga->ba.str_niv);
    gestion_hp_jo(ga);
}

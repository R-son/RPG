/*
** EPITECH PROJECT, 2020
** st_fight_menu.c
** File description:
** st_fight_menu
*/

#include "my.h"

void st_fight_menu(game *ga)
{
    ga->fm.bg_fight_menu = create_bg_fight_menu();
    ga->fm.fight_button = create_fight_button();
    ga->fm.heal_button = create_heal_button();
    ga->fm.oraora_button = create_oraora_button();
    ga->fm.sb_button = create_sb_button();
    ga->fm.sf_button = create_sf_button();
    ga->fm.tw_button = create_tw_button();
    ga->fm.fightorheal = 1;
    ga->fm.atk_nb = TURNINGAROUND;
    ga->fm.xrect = 0;
    ga->fm.atk_on = 0;
    ga->fm.nb_hp_jo = 382;
    ga->fm.nb_maxhp_jo = 382;
    ga->fm.bg_jo_heal_bar = create_bg_jo_heal_bar();
    ga->fm.front_jo_heal_bar = create_front_jo_heal_bar();
    ga->fm.heal_jo_txt = create_heal_jo_txt();
    ga->fm.str_heal_jo = "382/382";
    ga->fm.boss_turn = 0;
    ga->fm.ball_dmg = create_ball_dmg();
    ga->fm.boss_wait = 0;
}

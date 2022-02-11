/*
** EPITECH PROJECT, 2020
** gestion_boss_forest.c
** File description:
** gestion boss forest
*/

#include "my.h"

void gestion_boss_forest2(game *ga)
{
    ga->fm.atk_on = 0;
        ga->fm.boss_turn = 0;
        sfSprite_setPosition(ga->fm.ball_dmg, (sfVector2f){1700, 225});
        ga->fm.nb_hp_jo	-= ga->jo.dmg_jo;
        gestion_heal_jo(ga);
        gestion_hp_jo(ga);
        if (ga->ef.sf_turn > 0) {
            ga->ef.sf_turn--;
            ga->ba.nb_hp -= 20;
        }
        if (ga->ef.tw_cooldown > 0)
            ga->ef.tw_cooldown--;
}

void gestion_boss_forest(game *ga)
{
    static int a = 0;
    if (ga->fm.boss_wait > 0) {
        ga->fm.boss_wait--;
        ga->fm.atk_on = 0;
        ga->fm.boss_turn = 0;
        return;
    }
    sfSprite_move(ga->fm.ball_dmg, (sfVector2f){-25, 0});
    if (sfSprite_getPosition(ga->fm.ball_dmg).x < 250)
        gestion_boss_forest2(ga);
    if (a == 0 && ga->ba.nb_hp <= 50) {
        ga->ba.nb_hp += 450;
        a++;
    }
}

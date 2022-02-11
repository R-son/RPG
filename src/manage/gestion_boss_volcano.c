/*
** EPITECH PROJECT, 2020
** gestion_boss_volcano.c
** File description:
** gestion boss volcano
*/

#include "my.h"

void gestion_boss_volcano(game *ga)
{
    if (ga->fm.boss_wait > 0) {
        ga->fm.boss_wait--;
        ga->fm.atk_on = 0;
        ga->fm.boss_turn = 0;
        return;
    }
    sfSprite_move(ga->fm.ball_dmg, (sfVector2f){-25, 0});
    if (sfSprite_getPosition(ga->fm.ball_dmg).x < 250) {
        ga->fm.atk_on = 0;
        ga->fm.boss_turn = 0;
        sfSprite_setPosition(ga->fm.ball_dmg, (sfVector2f){1700, 225});
        ga->fm.nb_hp_jo -= ga->jo.dmg_jo;
        gestion_heal_jo(ga);
        gestion_hp_jo(ga);
        if (ga->ef.sf_turn > 0) {
            ga->ef.sf_turn--;
            ga->ba.nb_hp -= 20;
        }
        if (ga->ef.tw_cooldown > 0)
            ga->ef.tw_cooldown--;
    }
}

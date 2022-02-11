/*
** EPITECH PROJECT, 2020
** win.c
** File description:
** win fight
*/

#include "my.h"

void redirection_middle(sfRenderWindow *w, game *ga)
{
    if (ga->jo.dmg_jo == 30) {
        ga->jo.win_vi++;
        ga->ba.nb_xp += 250;
        ga->jo.money += 15;
    } if (ga->jo.dmg_jo == 40) {
        ga->jo.win_fo++;
        ga->ba.nb_xp += 300;
        ga->jo.money += 20;
    } if (ga->jo.dmg_jo == 50) {
        ga->jo.win_po++;
        ga->ba.nb_xp += 400;
        ga->jo.money += 30;
    }
    middle(w, ga);
}

void win(sfRenderWindow *w, game *ga, sfMusic *music)
{
    sfMusic_stop(music);
    ga->ef.power_up = 1;
    ga->fm.atk_nb = 0;
    ga->ef.power_up_use = 1;
    ga->ef.dmg_port = 1;
    ga->jo.pos.x = 890;
    ga->jo.pos.y = 790;
    sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
    ga->ba.nb_hp = 959;
    if (ga->jo.dmg_jo >= 20 && ga->jo.dmg_jo <= 50) {
        if (ga->jo.dmg_jo == 20) {
            ga->jo.win_vo++;
            ga->ba.nb_xp += 200;
            ga->jo.money += 100000;
        }
       gestion_xp(ga);
        redirection_middle(w, ga);
    } else if (ga->jo.dmg_jo == 60)
        end(w, ga);
}

/*
** EPITECH PROJECT, 2020
** gestion_fight_menu.c
** File description:
** gestion fight menu interface
*/

#include "my.h"

void gestion_sprite_fight_oraora(sfRenderWindow *w, game *ga, int nb_dmg)
{
    if (mouseonsprite(w, ga->fm.oraora_button, 353, 90) == 0) {
        sfSprite_setTextureRect
            (ga->fm.oraora_button, (sfIntRect){353, 0, 353, 90});
        if (sfMouse_isButtonPressed (sfMouseLeft)) {
            ga->fm.atk_nb = 1;
            ga->ba.nb_hp -= ((nb_dmg * 4 + ga->ba.niv_xp) * ga->ef.power_up);
        }
    } else
        sfSprite_setTextureRect
            (ga->fm.oraora_button, (sfIntRect){0, 0, 353, 90});
}

void gestion_sprite_fight_sb(sfRenderWindow *w, game *ga)
{
    if (ga->ba.niv_xp >= 6)
        gestion_sprite_fight_sb2(w, ga);
}

void gestion_sprite_fight_sf(sfRenderWindow *w, game *ga, int nb_dmg)
{
    if (ga->ba.niv_xp >= 3)
        gestion_sprite_fight_sf2(w, ga, nb_dmg);
}

void gestion_sprite_fight_tw2(sfRenderWindow *w, game *ga)
{
    if (mouseonsprite(w, ga->fm.tw_button, 315, 110) == 0) {
        sfSprite_setTextureRect(ga->fm.tw_button,
                                (sfIntRect){315, 0, 315, 110});
        if ((sfMouse_isButtonPressed(sfMouseLeft))) {
            ga->fm.atk_nb = 4;
            ga->fm.boss_wait = 3;
            ga->ef.tw_cooldown = 3;
        }
    } else
        sfSprite_setTextureRect(ga->fm.tw_button, (sfIntRect){0, 0, 315, 110});
}

void gestion_sprite_fight_tw(sfRenderWindow *w, game *ga)
{
    if (ga->ba.niv_xp >= 10)
        gestion_sprite_fight_tw2(w, ga);
}

/*
** EPITECH PROJECT, 2020
** gestion_sprite_heal.c
** File description:
** gestion sprite heal
*/

#include "my.h"

void gestion_sprite_heal2(sfRenderWindow *w, game *ga)
{
    if (mouseonsprite(w, ga->ef.pot_button, 275, 59) == 0) {
            sfSprite_setTextureRect
                (ga->ef.pot_button, (sfIntRect){275, 0, 275, 59});
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            ga->fm.nb_hp_jo += 150;
            gestion_hp_jo(ga);
            ga->jo.pot_pv--;
        }
    } else
        sfSprite_setTextureRect(ga->ef.pot_button, (sfIntRect){0, 0, 275, 59});
}

void gestion_sprite_heal(sfRenderWindow *w, game *ga)
{
    if (ga->jo.pot_pv > 0 && ga->fm.nb_hp_jo < 382) {
        sfSprite_setTextureRect
            (ga->ef.pot_button, (sfIntRect){275, 0, 275, 59});
        gestion_sprite_heal2(w, ga);
    }
}

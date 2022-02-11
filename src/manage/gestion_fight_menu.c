/*
** EPITECH PROJECT, 2020
** gestion_fight_menu.c
** File description:
** gestion fight menu interface
*/

#include "my.h"

void gestion_fight_or_heal(sfRenderWindow *w, game *ga)
{
    if (ga->fm.fightorheal == FIGHT) {
        if (mouseonsprite(w, ga->fm.heal_button, 206, 59) == 0) {
            sfSprite_setTextureRect(ga->fm.heal_button,
            (sfIntRect){206, 0, 206, 59});
            ga->fm.fightorheal = (sfMouse_isButtonPressed(sfMouseLeft))
                ? HEAL : FIGHT;
        } else
            sfSprite_setTextureRect(ga->fm.heal_button,
            (sfIntRect){0, 0, 206, 59});
    } else if (ga->fm.fightorheal == HEAL) {
        if (mouseonsprite(w, ga->fm.fight_button, 206, 59) == 0) {
            sfSprite_setTextureRect(ga->fm.fight_button,
            (sfIntRect){206, 0, 206, 59});
            ga->fm.fightorheal = (sfMouse_isButtonPressed(sfMouseLeft))
                ? FIGHT : HEAL;
        }
        else
            sfSprite_setTextureRect(ga->fm.fight_button,
            (sfIntRect){0, 0, 206, 59});
    }
}

void gestion_sprite_fight(sfRenderWindow *w, game *ga, int dmg_boss)
{
    if (ga->fm.fightorheal == FIGHT && ga->fm.atk_on == 0) {
        gestion_sprite_fight_oraora(w, ga, dmg_boss);
        gestion_sprite_fight_sb(w, ga);
        gestion_sprite_fight_sf(w, ga, dmg_boss);
        if (ga->ef.tw_cooldown == 0)
            gestion_sprite_fight_tw(w, ga);
    }
}

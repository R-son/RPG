/*
** EPITECH PROJECT, 2020
** gestion_sprite_fight2
** File description:
** Part 2 of all functions
*/

#include "my.h"

int imove_pot_sb2(sfVector2i mouse, game *ga, sfVector2f c, sfVector2f d)
{
    int count = 0;

    if ((mouse.x >= c.x && mouse.y >= c.y)
            && (mouse.x <= d.x && mouse.y <= d.y)
            && ga->jo.pot_sb > 0)
            count = 1;
        else
            count = 0;
    return count;
}

void potpv_on_square_i2(game *ga)
{
    if (ga->fm.nb_hp_jo > 232)
        ga->fm.nb_hp_jo = 382;
    else if (ga->fm.nb_hp_jo <= 232)
        ga->fm.nb_hp_jo += 150;
}

void gestion_sprite_fight_sb2(sfRenderWindow *w, game *ga)
{
    if (mouseonsprite(w, ga->fm.sb_button, 410, 110) == 0) {
        sfSprite_setTextureRect(ga->fm.sb_button,
                (sfIntRect){410, 0, 410, 110});
        if (sfMouse_isButtonPressed (sfMouseLeft)) {
            ga->fm.atk_nb = 2;
            ga->ba.nb_hp -= (ga->ba.nb_hp / 16) * ga->ef.power_up;
        }
    } else
        sfSprite_setTextureRect(ga->fm.sb_button, (sfIntRect){0, 0, 410, 110});
}

void gestion_sprite_fight_sf2(sfRenderWindow *w, game *ga, int nb_dmg)
{
    if (mouseonsprite(w, ga->fm.sf_button, 362, 110) == 0) {
        sfSprite_setTextureRect(ga->fm.sf_button,
        (sfIntRect){362, 0, 362, 110});
        if (sfMouse_isButtonPressed (sfMouseLeft)) {
            ga->fm.atk_nb = 3;
            ga->ba.nb_hp -= (nb_dmg * 4 + ga->ba.niv_xp) * ga->ef.power_up;
            ga->ef.sf_turn = 2;
        }
    } else
        sfSprite_setTextureRect(ga->fm.sf_button, (sfIntRect){0, 0, 362, 110});
}

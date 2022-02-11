/*
** EPITECH PROJECT, 2020
** create sprite
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_bg_fight_menu(void)
{
    sfTexture *t_bg_fm;
    sfSprite *s_bg_fm;

    t_bg_fm = sfTexture_createFromFile("image/fight_menu/bg_fm.png", NULL);
    s_bg_fm = sfSprite_create();
    sfSprite_setTexture(s_bg_fm, t_bg_fm, sfTrue);
    sfSprite_setPosition(s_bg_fm, (sfVector2f){0, 707});
    sfSprite_setTextureRect(s_bg_fm, (sfIntRect){0, 0, 1230, 373});
    return (s_bg_fm);
}

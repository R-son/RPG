/*
** EPITECH PROJECT, 2020
** create_bg_boss_heal_bar.c
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_bg_boss_heal_bar(void)
{
    sfTexture *t_bg_hb;
    sfSprite *s_bg_hb;

    t_bg_hb = sfTexture_createFromFile
        ("image/bar/bg_boss_heal_bar.png", NULL);
    s_bg_hb = sfSprite_create();
    sfSprite_setTexture(s_bg_hb, t_bg_hb, sfTrue);
    sfSprite_setPosition(s_bg_hb, (sfVector2f){478, 25});
    return (s_bg_hb);
}

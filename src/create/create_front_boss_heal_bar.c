/*
** EPITECH PROJECT, 2020
** create_front_boss_heal_bar.c
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_front_boss_heal_bar(void)
{
    sfTexture *t_front_hb;
    sfSprite *s_front_hb;

    t_front_hb = sfTexture_createFromFile
        ("image/bar/front_boss_heal_bar.png", NULL);
    s_front_hb = sfSprite_create();
    sfSprite_setTexture(s_front_hb, t_front_hb, sfTrue);
    sfSprite_setPosition(s_front_hb, (sfVector2f){478, 25});
    return s_front_hb;
}

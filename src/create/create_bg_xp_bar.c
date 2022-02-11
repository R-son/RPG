/*
** EPITECH PROJECT, 2020
** create_bg_xp_bar.c
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_bg_xp_bar(void)
{
    sfTexture *t_bg_xp;
    sfSprite *s_bg_xp;

    t_bg_xp = sfTexture_createFromFile("image/bar/bg_xp_bar.png", NULL);
    s_bg_xp = sfSprite_create();
    sfSprite_setTexture(s_bg_xp, t_bg_xp, sfTrue);
    sfSprite_setPosition(s_bg_xp, (sfVector2f){101, 933});
    sfSprite_setTextureRect(s_bg_xp, (sfIntRect){0, 0, 387, 62});
    return (s_bg_xp);
}

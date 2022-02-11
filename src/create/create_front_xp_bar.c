/*
** EPITECH PROJECT, 2020
** create_front_xp_bar.c
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_front_xp_bar(void)
{
    sfTexture *t_front_xp;
    sfSprite *s_front_xp;

    t_front_xp = sfTexture_createFromFile("image/bar/front_xp_bar.png", NULL);
    s_front_xp = sfSprite_create();
    sfSprite_setTexture(s_front_xp, t_front_xp, sfTrue);
    sfSprite_setPosition(s_front_xp, (sfVector2f){101, 933});
    sfSprite_setTextureRect(s_front_xp, (sfIntRect){0, 0, 0, 62});
    return (s_front_xp);
}

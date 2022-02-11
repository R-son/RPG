/*
** EPITECH PROJECT, 2020
** create_star_finger.c
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_star_finger(void)
{
    sfTexture *t_sf;
    sfSprite *s_sf;

    t_sf = sfTexture_createFromFile("image/jotaro_s/star_finger.png", NULL);
    s_sf = sfSprite_create();
    sfSprite_setTexture(s_sf, t_sf, sfTrue);
    sfSprite_setPosition(s_sf, (sfVector2f){1600, 200});
    sfSprite_setTextureRect(s_sf, (sfIntRect){0, 0, 222, 130});
    return (s_sf);
}

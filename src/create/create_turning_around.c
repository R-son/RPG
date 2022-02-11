/*
** EPITECH PROJECT, 2020
** create_turning_around.c
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_turning_around(void)
{
    sfTexture *t_ta;
    sfSprite *s_ta;

    t_ta = sfTexture_createFromFile("image/jotaro_s/turning_around.png", NULL);
    s_ta = sfSprite_create();
    sfSprite_setTexture(s_ta, t_ta, sfTrue);
    sfSprite_setPosition(s_ta, (sfVector2f){200, 210});
    sfSprite_setTextureRect(s_ta, (sfIntRect){0, 0, 100, 128});
    return (s_ta);
}

/*
** EPITECH PROJECT, 2020
** create_star_platinium.c
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_star_platinium(void)
{
    sfTexture *t_sp;
    sfSprite *s_sp;

    t_sp = sfTexture_createFromFile("image/jotaro_s/star_platinium.png", NULL);
    s_sp = sfSprite_create();
    sfSprite_setTexture(s_sp, t_sp, sfTrue);
    sfSprite_setPosition(s_sp, (sfVector2f){200, 200});
    sfSprite_setTextureRect(s_sp, (sfIntRect){0, 0, 170, 130});
    return (s_sp);
}

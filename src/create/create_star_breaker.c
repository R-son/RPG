/*
** EPITECH PROJECT, 2020
** create_star_breaker.c
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_star_breaker(void)
{
    sfTexture *t_sb;
    sfSprite *s_sb;

    t_sb = sfTexture_createFromFile("image/jotaro_s/star_breaker.png", NULL);
    s_sb = sfSprite_create();
    sfSprite_setTexture(s_sb, t_sb, sfTrue);
    sfSprite_setPosition(s_sb, (sfVector2f){1600, 200});
    sfSprite_setTextureRect(s_sb, (sfIntRect){0, 0, 225, 144});
    return (s_sb);
}

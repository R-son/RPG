/*
** EPITECH PROJECT, 2020
** create_ball_dmg.c
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_ball_dmg(void)
{
    sfTexture *t_ball_dmg;
    sfSprite *s_ball_dmg;

    t_ball_dmg = sfTexture_createFromFile("image/jotaro_s/ball.png", NULL);
    s_ball_dmg = sfSprite_create();
    sfSprite_setTexture(s_ball_dmg, t_ball_dmg, sfTrue);
    sfSprite_setPosition(s_ball_dmg, (sfVector2f){1700, 225});
    sfSprite_setTextureRect(s_ball_dmg, (sfIntRect){0, 0, 33, 33});
    return (s_ball_dmg);
}

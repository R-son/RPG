/*
** EPITECH PROJECT, 2020
** create_htp.c
** File description:
** create htp
*/

#include "my.h"

sfSprite *create_htp(void)
{
    sfTexture *t_htp;
    sfSprite *s_htp;

    t_htp = sfTexture_createFromFile("image/how_to_play_but.png", NULL);
    s_htp = sfSprite_create();
    sfSprite_setTexture(s_htp, t_htp, sfTrue);
    sfSprite_setPosition(s_htp, (sfVector2f){10, 10});
    sfSprite_setTextureRect(s_htp, (sfIntRect){0, 0, 55, 95});
    return (s_htp);
}

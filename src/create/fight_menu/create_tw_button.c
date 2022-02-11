/*
** EPITECH PROJECT, 2020
** create sprite
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_tw_button(void)
{
    sfTexture *t_tw;
    sfSprite *s_tw;

    t_tw = sfTexture_createFromFile("image/fight_menu/tw_but.png", NULL);
    s_tw = sfSprite_create();
    sfSprite_setTexture(s_tw, t_tw, sfTrue);
    sfSprite_setPosition(s_tw, (sfVector2f){810, 890});
    sfSprite_setTextureRect(s_tw, (sfIntRect){315, 0, 315, 110});
    return (s_tw);
}

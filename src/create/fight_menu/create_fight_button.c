/*
** EPITECH PROJECT, 2020
** create sprite
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_fight_button(void)
{
    sfTexture *t_fb;
    sfSprite *s_fb;

    t_fb = sfTexture_createFromFile("image/fight_menu/fight_but.png", NULL);
    s_fb = sfSprite_create();
    sfSprite_setTexture(s_fb, t_fb, sfTrue);
    sfSprite_setPosition(s_fb, (sfVector2f){12, 765});
    sfSprite_setTextureRect(s_fb, (sfIntRect){206, 0, 206, 59});
    return (s_fb);
}

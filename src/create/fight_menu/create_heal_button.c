/*
** EPITECH PROJECT, 2020
** create sprite
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_heal_button(void)
{
    sfTexture *t_hb;
    sfSprite *s_hb;

    t_hb = sfTexture_createFromFile("image/fight_menu/heal_but.png", NULL);
    s_hb = sfSprite_create();
    sfSprite_setTexture(s_hb, t_hb, sfTrue);
    sfSprite_setPosition(s_hb, (sfVector2f){12, 850});
    sfSprite_setTextureRect(s_hb, (sfIntRect){0, 0, 206, 59});
    return (s_hb);
}

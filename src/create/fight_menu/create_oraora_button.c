/*
** EPITECH PROJECT, 2020
** create sprite
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_oraora_button(void)
{
    sfTexture *t_ora;
    sfSprite *s_ora;

    t_ora = sfTexture_createFromFile("image/fight_menu/oraora_but.png", NULL);
    s_ora = sfSprite_create();
    sfSprite_setTexture(s_ora, t_ora, sfTrue);
    sfSprite_setPosition(s_ora, (sfVector2f){305, 750});
    sfSprite_setTextureRect(s_ora, (sfIntRect){0, 0, 353, 90});
    return (s_ora);
}

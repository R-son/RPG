/*
** EPITECH PROJECT, 2020
** create sprite
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_sf_button(void)
{
    sfTexture *t_sb;
    sfSprite *s_sb;

    t_sb = sfTexture_createFromFile("image/fight_menu/sf_but.png", NULL);
    s_sb = sfSprite_create();
    sfSprite_setTexture(s_sb, t_sb, sfTrue);
    sfSprite_setPosition(s_sb, (sfVector2f){790, 740});
    sfSprite_setTextureRect(s_sb, (sfIntRect){362, 0, 362, 110});
    return (s_sb);
}

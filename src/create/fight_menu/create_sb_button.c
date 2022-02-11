/*
** EPITECH PROJECT, 2020
** create sprite
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_sb_button(void)
{
    sfTexture *t_sb;
    sfSprite *s_sb;

    t_sb = sfTexture_createFromFile("image/fight_menu/sb_but.png", NULL);
    s_sb = sfSprite_create();
    sfSprite_setTexture(s_sb, t_sb, sfTrue);
    sfSprite_setPosition(s_sb, (sfVector2f){280, 890});
    sfSprite_setTextureRect(s_sb, (sfIntRect){410, 0, 410, 110});
    return (s_sb);
}

/*
** EPITECH PROJECT, 2020
** create_bg_jo_heal_bar.c
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_bg_jo_heal_bar(void)
{
    sfTexture *t_bg_jo_heal;
    sfSprite *s_bg_jo_heal;

    t_bg_jo_heal = sfTexture_createFromFile("image/bar/bg_xp_bar.png", NULL);
    s_bg_jo_heal = sfSprite_create();
    sfSprite_setTexture(s_bg_jo_heal, t_bg_jo_heal, sfTrue);
    sfSprite_setPosition(s_bg_jo_heal, (sfVector2f){1400, 933});
    sfSprite_setTextureRect(s_bg_jo_heal, (sfIntRect){0, 0, 387, 62});
    return (s_bg_jo_heal);
}

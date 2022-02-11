/*
** EPITECH PROJECT, 2020
** create_front_jo_heal_bar.c
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_front_jo_heal_bar(void)
{
    sfTexture *t_jo_heal;
    sfSprite *s_jo_heal;

    t_jo_heal = sfTexture_createFromFile("image/bar/front_heal_jo.png", NULL);
    s_jo_heal = sfSprite_create();
    sfSprite_setTexture(s_jo_heal, t_jo_heal, sfTrue);
    sfSprite_setPosition(s_jo_heal, (sfVector2f){1400, 933});
    sfSprite_setTextureRect(s_jo_heal, (sfIntRect){0, 0, 387, 62});
    return (s_jo_heal);
}
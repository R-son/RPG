/*
** EPITECH PROJECT, 2020
** create_monster_two.c
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_port_monster(void)
{
    sfTexture *t_pm;
    sfSprite *s_pm;

    srand(time(0));
    t_pm = sfTexture_createFromFile("image/monster_s/port_monster.png", NULL);
    s_pm = sfSprite_create();
    sfSprite_setTexture(s_pm, t_pm, sfTrue);
    sfSprite_setPosition(s_pm, (sfVector2f){500, 500});
    sfSprite_setTextureRect(s_pm, (sfIntRect){0, 0, 55, 60});
    return (s_pm);
}

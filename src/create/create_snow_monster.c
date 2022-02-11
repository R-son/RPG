/*
** EPITECH PROJECT, 2020
** create_snow_monster.c
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_snow_monster(void)
{
    sfTexture *t_sm;
    sfSprite *s_sm;

    t_sm = sfTexture_createFromFile("image/monster_s/snow_monster.png", NULL);
    s_sm = sfSprite_create();
    sfSprite_setTexture(s_sm, t_sm, sfTrue);
    sfSprite_setPosition(s_sm, (sfVector2f){500, 500});
    sfSprite_setTextureRect(s_sm, (sfIntRect){0, 0, 55, 60});
    return (s_sm);
}

sfSprite *create_volcano_monster(void)
{
    sfTexture *t_vm;
    sfSprite *s_vm;
    char *filepath = "image/monster_s/volcano_monster.png";

    t_vm = sfTexture_createFromFile(filepath, NULL);
    s_vm = sfSprite_create();
    sfSprite_setTexture(s_vm, t_vm, sfTrue);
    sfSprite_setPosition(s_vm, (sfVector2f){500, 500});
    sfSprite_setTextureRect(s_vm, (sfIntRect){0, 0, 55, 60});
    return (s_vm);
}

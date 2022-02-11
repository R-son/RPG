/*
** EPITECH PROJECT, 2020
** create_monster_one.c
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

    t_vm = sfTexture_createFromFile("image/monster_s/v_monster.png", NULL);
    s_vm = sfSprite_create();
    sfSprite_setTexture(s_vm, t_vm, sfTrue);
    sfSprite_setPosition(s_vm, (sfVector2f){500, 500});
    sfSprite_setTextureRect(s_vm, (sfIntRect){0, 0, 55, 60});
    return (s_vm);
}

sfSprite *create_forest_monster(void)
{
    sfTexture *t_fm;
    sfSprite *s_fm;

    t_fm = sfTexture_createFromFile("image/monster_s/forest_monster.png", NULL);
    s_fm = sfSprite_create();
    sfSprite_setTexture(s_fm, t_fm, sfTrue);
    sfSprite_setPosition(s_fm, (sfVector2f){500, 500});
    sfSprite_setTextureRect(s_fm, (sfIntRect){0, 0, 55, 60});
    return (s_fm);
}

sfSprite *create_city_monster(void)
{
    sfTexture *t_cm;
    sfSprite *s_cm;

    t_cm = sfTexture_createFromFile("image/monster_s/city_monster.png", NULL);
    s_cm = sfSprite_create();
    sfSprite_setTexture(s_cm, t_cm, sfTrue);
    sfSprite_setPosition(s_cm, (sfVector2f){500, 500});
    sfSprite_setTextureRect(s_cm, (sfIntRect){0, 0, 55, 60});
    return (s_cm);
}

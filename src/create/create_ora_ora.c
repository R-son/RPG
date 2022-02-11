/*
** EPITECH PROJECT, 2020
** create_ora_ora.c
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_ora_ora(void)
{
    sfTexture *t_ora_ora;
    sfSprite *s_ora_ora;

    t_ora_ora = sfTexture_createFromFile("image/jotaro_s/ora_ora.png", NULL);
    s_ora_ora = sfSprite_create();
    sfSprite_setTexture(s_ora_ora, t_ora_ora, sfTrue);
    sfSprite_setPosition(s_ora_ora, (sfVector2f){1600, 200});
    sfSprite_setTextureRect(s_ora_ora, (sfIntRect){0, 0, 160, 144});
    return (s_ora_ora);
}

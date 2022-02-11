/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create jotaro sprite
*/

#include "my.h"

sfSprite *create_jotaro(game *ga)
{
    sfTexture *texture;
    sfSprite *sprite;
    char *filepath = "image/jotaro_s/jotaro.png";

    ga->jo.jo_rect.left = 0;
    ga->jo.jo_rect.top = 0;
    ga->jo.jo_rect.width = 33;
    ga->jo.jo_rect.height = 33;
    texture = sfTexture_createFromFile(filepath, NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    ga->jo.pos.x = 700;
    ga->jo.pos.y = 400;
    sfSprite_setPosition(sprite, ga->jo.pos);
    sfSprite_setTextureRect(sprite, ga->jo.jo_rect);
    return (sprite);
}
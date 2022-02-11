/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** star ball
*/

#include "my.h"

sfSprite *create_star_ball(game *ga)
{
    sfTexture* txt;
    sfSprite* sprite;
    char *filepath = "image/jotaro_s/ball.png";
    sfVector2f pos = {ga->jo.pos.x, ga->jo.pos.y};

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, txt, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return (sprite);
}

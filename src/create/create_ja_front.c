/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create joseph-ange front
*/

#include "my.h"

sfSprite *create_ja_front(game *ga)
{
    sfTexture *texture;
    sfSprite *sprite;
    char *filepath = "image/joseph_ange/ja_walk_front.png";

    ga->ja.ja_rect.left = 0;
    ga->ja.ja_rect.top = 0;
    ga->ja.ja_rect.width = 33;
    ga->ja.ja_rect.height = 33;
    texture = sfTexture_createFromFile(filepath, NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    ga->ja.ja_pos.x = 965;
    ga->ja.ja_pos.y = 850;
    sfSprite_setPosition(sprite, ga->ja.ja_pos);
    sfSprite_setTextureRect(sprite, ga->ja.ja_rect);
    return (sprite);
}

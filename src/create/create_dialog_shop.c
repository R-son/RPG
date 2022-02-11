/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** dialog shop
*/

#include "my.h"

sfSprite *create_dialog_shop(game *ga)
{
    sfTexture *texture;
    sfSprite *sprite;
    char *filepath = "image/dialogs/dialog_shop.png";

    texture = sfTexture_createFromFile(filepath, NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    ga->di.di_pos.x = 1100;
    ga->di.di_pos.y = 800;
    sfSprite_setPosition(sprite, ga->di.di_pos);
    return (sprite);
}

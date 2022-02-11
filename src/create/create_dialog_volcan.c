/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create dialog box
*/

#include "my.h"

sfSprite *create_dialog_volcan(game *ga)
{
    sfTexture *texture;
    sfSprite *sprite;
    char *filepath = "image/dialogs/dialog_kars.png";

    ga->di.di_rect.left = 0;
    ga->di.di_rect.top = 0;
    ga->di.di_rect.width = 300;
    ga->di.di_rect.height = 105;
    texture = sfTexture_createFromFile(filepath, NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    ga->di.di_pos.x = 1000;
    ga->di.di_pos.y = 370;
    sfSprite_setPosition(sprite, ga->di.di_pos);
    sfSprite_setTextureRect(sprite, ga->di.di_rect);
    return (sprite);
}

/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create out spawn sprite
*/

#include "my.h"

sfSprite *create_house(void)
{
    sfTexture* txt;
    sfSprite* sprite;
    char *filepath = "image/house.png";
    sfVector2f pos = {700, 400};

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, txt, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return (sprite);
}

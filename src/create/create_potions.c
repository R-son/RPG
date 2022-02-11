/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create potion sprites
*/

#include "my.h"

sfSprite *create_pv_potion(void)
{
    sfTexture* txt;
    sfSprite* sprite;
    char *filepath = "image/potion1.png";
    sfVector2f pos = {480, 820};

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, txt, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return (sprite);
}

sfSprite *create_sb_potion(void)
{
    sfTexture* txt;
    sfSprite* sprite;
    char *filepath = "image/potion2.png";
    sfVector2f pos = {1230, 750};

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, txt, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return (sprite);
}

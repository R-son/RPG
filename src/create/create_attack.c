/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create attack sprites
*/

#include "my.h"

sfSprite *create_attack1(void)
{
    sfTexture* txt;
    sfSprite* sprite;
    char *filepath = "image/pause/attack1.png";
    sfVector2f pos = {1500, 700};

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, txt, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return (sprite);
}

sfSprite *create_attack2(void)
{
    sfTexture* txt;
    sfSprite* sprite;
    char *filepath = "image/pause/attack2.png";
    sfVector2f pos = {1500, 800};

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, txt, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return (sprite);
}

sfSprite *create_attack3(void)
{
    sfTexture* txt;
    sfSprite* sprite;
    char *filepath = "image/pause/attack3.png";
    sfVector2f pos = {1500, 900};

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, txt, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return (sprite);
}

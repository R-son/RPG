/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create messages
*/

#include "my.h"

sfSprite *create_message1(void)
{
    sfTexture* txt;
    sfSprite* sprite;
    char *filepath = "image/pause/message1.png";
    sfVector2f pos = {680, 100};

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, txt, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return (sprite);
}

sfSprite *create_message2(void)
{
    sfTexture* txt;
    sfSprite* sprite;
    char *filepath = "image/pause/message2.png";
    sfVector2f pos = {1000, 100};

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, txt, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return (sprite);
}

sfSprite *create_message3(void)
{
    sfTexture* txt;
    sfSprite* sprite;
    char *filepath = "image/pause/message3.png";
    sfVector2f pos = {1330, 100};

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, txt, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return (sprite);
}

sfSprite *create_message4(void)
{
    sfTexture* txt;
    sfSprite* sprite;
    char *filepath = "image/pause/message4.png";
    sfVector2f pos = {1680, 100};

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, txt, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return (sprite);
}

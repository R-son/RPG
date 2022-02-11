/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create sprites
*/

#include "my.h"

sfSprite *create_squirrel(void)
{
    sfTexture* txt;
    sfSprite* sprite;
    char *filepath = "image/fight_menu/squirrel.png";
    sfVector2f pos = {1700, 225};

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, txt, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return (sprite);
}

sfSprite *create_knife(void)
{
    sfTexture* txt;
    sfSprite* sprite;
    char *filepath = "image/fight_menu/knife.png";
    sfVector2f pos = {1700, 225};

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, txt, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return (sprite);
}

sfSprite *create_ja_ball(void)
{
    sfTexture* txt;
    sfSprite* sprite;
    char *filepath = "image/fight_menu/ja_ball.png";
    sfVector2f pos = {1700, 225};

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, txt, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return (sprite);
}

sfSprite *create_sha(void)
{
    sfTexture* txt;
    sfSprite* sprite;
    char *filepath = "image/fight_menu/sha.png";
    sfVector2f pos = {1700, 225};

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, txt, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return (sprite);
}

sfSprite *create_arrow(void)
{
    sfTexture* txt;
    sfSprite* sprite;
    char *filepath = "image/fight_menu/arrow.png";
    sfVector2f pos = {1700, 225};

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, txt, sfTrue);
    sfSprite_setPosition(sprite, pos);
    return (sprite);
}

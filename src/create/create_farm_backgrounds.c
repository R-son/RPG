/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create background of windows
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

sfSprite *po_farm_background(void)
{
    sfTexture* txt;
    sfSprite* background;
    char *filepath = "image/maps_rpg/port_zone/port_farm.jpg";

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, txt, sfTrue);
    return (background);
}

sfSprite *vi_farm_background(void)
{
    sfTexture* txt;
    sfSprite* background;
    char *filepath = "image/maps_rpg/ville_zone/ville_farm.jpg";

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, txt, sfTrue);
    return (background);
}

sfSprite *fo_farm_background(void)
{
    sfTexture* txt;
    sfSprite* background;
    char *filepath = "image/maps_rpg/foret_zone/foret_farm.jpg";

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, txt, sfTrue);
    return (background);
}

sfSprite *vo_farm_background(void)
{
    sfTexture* txt;
    sfSprite* background;
    char *filepath = "image/maps_rpg/volcan_zone/volcan_farm.jpg";

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, txt, sfTrue);
    return (background);
}

sfSprite *ne_farm_background(void)
{
    sfTexture* txt;
    sfSprite* background;
    char *filepath = "image/maps_rpg/neige_zone/neige_farm.jpg";

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, txt, sfTrue);
    return (background);
}

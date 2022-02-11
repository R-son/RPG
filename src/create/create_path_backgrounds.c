/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create paths backgrounds
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

sfSprite *po_path_background(void)
{
    sfTexture* txt;
    sfSprite* background;
    char *filepath = "image/maps_rpg/port_zone/port_chemin.jpg";

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, txt, sfTrue);
    return (background);
}

sfSprite *vi_path_background(void)
{
    sfTexture* txt;
    sfSprite* background;
    char *filepath = "image/maps_rpg/ville_zone/ville_chemin.jpg";

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, txt, sfTrue);
    return (background);
}

sfSprite *vo_path_background(void)
{
    sfTexture* txt;
    sfSprite* background;
    char *filepath = "image/maps_rpg/volcan_zone/volcan_chemin.jpg";

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, txt, sfTrue);
    return (background);
}

sfSprite *fo_path_background(void)
{
    sfTexture* txt;
    sfSprite* background;
    char *filepath = "image/maps_rpg/foret_zone/foret_chemin.jpg";

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, txt, sfTrue);
    return (background);
}

sfSprite *ne_path_background(void)
{
    sfTexture* txt;
    sfSprite* background;
    char *filepath = "image/maps_rpg/neige_zone/neige_chemin.jpg";

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, txt, sfTrue);
    return (background);
}

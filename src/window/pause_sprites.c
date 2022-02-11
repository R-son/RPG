/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** pause sprite function
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

void place_buttons(sfRenderWindow* w, sfSprite *pl, sfSprite *me, sfSprite *ex)
{
    sfVector2f pos_play = {100, 550};
    sfVector2f pos_menu = {100, 700};
    sfVector2f pos_exit = {100, 850};

    sfSprite_setPosition(pl, pos_play);
    sfRenderWindow_drawSprite(w, pl, NULL);
    sfSprite_setPosition(me, pos_menu);
    sfRenderWindow_drawSprite(w, me, NULL);
    sfSprite_setPosition(ex, pos_exit);
    sfRenderWindow_drawSprite(w, ex, NULL);
}

sfSprite *pause_background(void)
{
    sfTexture* texture;
    sfSprite* background;

    texture = sfTexture_createFromFile("image/maps_rpg/map/map_rpg.jpg", NULL);
    if (!texture)
        return NULL;
    background = sfSprite_create();
    sfSprite_setTexture(background, texture, sfTrue);
    return background;
}

sfSprite *p_menu(void)
{
    sfTexture *texture;
    sfSprite *p_menu;
    sfIntRect rect = {0, 0, 250, 69};

    texture = sfTexture_createFromFile("image/pause_menu.png", NULL);
    if (!texture)
        return NULL;
    p_menu = sfSprite_create();
    sfSprite_setTexture(p_menu, texture, sfTrue);
    sfSprite_setTextureRect(p_menu, rect);
    return p_menu;
}

sfSprite *p_exit(void)
{
    sfTexture *texture;
    sfSprite *p_exit;
    sfIntRect rect = {0, 0, 250, 69};

    texture = sfTexture_createFromFile("image/pause_exit.png", NULL);
    if (!texture)
        return NULL;
    p_exit = sfSprite_create();
    sfSprite_setTexture(p_exit, texture, sfTrue);
    sfSprite_setTextureRect(p_exit, rect);
    return p_exit;
}

sfSprite *p_play(void)
{
    sfTexture *texture;
    sfSprite *p_play;
    sfIntRect rect = {0, 0, 250, 69};

    texture = sfTexture_createFromFile("image/pause_play.png", NULL);
    if (!texture)
        return NULL;
    p_play = sfSprite_create();
    sfSprite_setTexture(p_play, texture, sfTrue);
    sfSprite_setTextureRect(p_play, rect);
    return p_play;
}

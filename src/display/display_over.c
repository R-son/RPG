/*
** EPITECH PROJECT, 2020
** display_over
** File description:
** display over
*/

#include "my.h"

sfSprite *display_over(void)
{
    sfTexture* texture;
    sfSprite* g_over;

    texture = sfTexture_createFromFile("image/game_over.jpg", NULL);
    if (!texture)
        return (NULL);
    g_over = sfSprite_create();
    sfSprite_setTexture(g_over, texture, sfTrue);
    return (g_over);
}

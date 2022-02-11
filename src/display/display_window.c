/*
** EPITECH PROJECT, 2020
** display_window
** File description:
** print window
*/

#include "my.h"

void display_window(sfRenderWindow *window, game *ga)
{
    sfRenderWindow_display(window);
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, ga->me.spriteback, NULL);
}

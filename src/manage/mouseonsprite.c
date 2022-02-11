/*
** EPITECH PROJECT, 2020
** mouseonsprite.c
** File description:
** verif if mouse is on sprite
*/

#include "my.h"

int mouseonsprite(sfRenderWindow *window, sfSprite *sprite, int w, int h)
{
    if (sfMouse_getPositionRenderWindow(window).x
        >= sfSprite_getPosition(sprite).x &&
        sfMouse_getPositionRenderWindow(window).x
        <= sfSprite_getPosition(sprite).x + w &&
        sfMouse_getPositionRenderWindow(window).y
        >= sfSprite_getPosition(sprite).y &&
        sfMouse_getPositionRenderWindow(window).y
        <= sfSprite_getPosition(sprite).y + h)
        return (0);
    return (-1);
}

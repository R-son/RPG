/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** window to pause
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

int window_to_pause(sfRenderWindow* window, game *ga, sfMusic *music)
{
    static int p = 0;

    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        p = 1;
    if (p == 1)
        p = pause(window, ga, music);
    return (p);
}

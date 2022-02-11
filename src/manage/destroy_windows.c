/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** destroy sprites and musics
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"

void destroy_cutscne(sfRenderWindow* window, game *ga, sfMusic *music)
{
    sfSprite_destroy(ga->jo.s_jotaro);
    sfSprite_destroy(ga->ja.s_josephange);
    sfSprite_destroy(ga->di.di_sprite);
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
}

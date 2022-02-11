/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** event dialog gestion
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"

void event_dialog(game *ga)
{
    if (sfKeyboard_isKeyPressed(sfKeyNum1)) {
        ga->di.di_rect.left = 0;
        sfSprite_setTextureRect(ga->di.di_sprite, ga->di.di_rect);
    } if (sfKeyboard_isKeyPressed(sfKeyNum2)) {
        ga->di.di_rect.left = 300;
        sfSprite_setTextureRect(ga->di.di_sprite, ga->di.di_rect);
    } if (sfKeyboard_isKeyPressed(sfKeyNum3)) {
        ga->di.di_rect.left = 600;
        sfSprite_setTextureRect(ga->di.di_sprite, ga->di.di_rect);
    }
}

/*
** EPITECH PROJECT, 2020
** display_sprite
** File description:
** display_sprite
*/

#include "my.h"

void display_xp(sfRenderWindow *window, game *ga)
{
    sfRenderWindow_drawSprite(window, ga->ba.bg_xp_bar, NULL);
    sfRenderWindow_drawSprite(window, ga->ba.front_xp_bar, NULL);
    sfRenderWindow_drawText(window, ga->ba.xp_txt, NULL);
    sfRenderWindow_drawText(window, ga->ba.niv_txt, NULL);
    sfRenderWindow_drawSprite(window, ga->fm.bg_jo_heal_bar, NULL);
    sfRenderWindow_drawSprite(window, ga->fm.front_jo_heal_bar, NULL);
    sfRenderWindow_drawText(window, ga->fm.heal_jo_txt, NULL);
}

/*
** EPITECH PROJECT, 2020
** starball
** File description:
** Starball's function
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

void touch_monsters(game *ga)
{
    touch_monster1_city(ga);
    touch_monster2_city(ga);
    touch_monster3_city(ga);
    touch_monster4_city(ga);
    touch_monster1_snow(ga);
    touch_monster2_snow(ga);
    touch_monster3_snow(ga);
    touch_monster4_snow(ga);
    touch_monster1_port(ga);
    touch_monster2_port(ga);
    touch_monster3_port(ga);
    touch_monster4_port(ga);
    touch_monster1_forest(ga);
    touch_monster2_forest(ga);
    touch_monster3_forest(ga);
    touch_monster4_forest(ga);
    touch_monster1_volcano(ga);
    touch_monster2_volcano(ga);
    touch_monster3_volcano(ga);
    touch_monster4_volcano(ga);
}

void star_ball(sfRenderWindow* window, game *ga)
{
    sfVector2f pos = {ga->jo.pos.x - 85, ga->jo.pos.y - 85};

    sfSprite_setPosition(ga->jo.star_ball, pos);
    sfRenderWindow_drawSprite(window, ga->jo.star_ball, NULL);
    touch_monsters(ga);
}
/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** obstacle on maps gestion
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

int obstacle_gestion(game *ga, sfVector2f a, sfVector2f b)
{
    int i = 0;

    ga->jo.pos.x > a.x && !(ga->jo.pos.x > b.x) &&
        (ga->jo.pos.y > a.y && ga->jo.pos.y < b.y) ?
        (ga->jo.pos.x = b.x + 5) : i++;
    ga->jo.pos.x < b.x && !(ga->jo.pos.x < a.x) &&
        (ga->jo.pos.y > a.y && ga->jo.pos.y < b.y) ?
        (ga->jo.pos.x = a.x - 5) : i++;
    ga->jo.pos.y > a.y && !(ga->jo.pos.y > b.y) &&
        (ga->jo.pos.x > a.x && ga->jo.pos.x < b.x) ?
        (ga->jo.pos.y = b.y + 5) : i++;
    ga->jo.pos.y < b.y && !(ga->jo.pos.y < a.y) &&
        (ga->jo.pos.x > a.x && ga->jo.pos.x < b.x) ?
        (ga->jo.pos.y = a.y - 5) : i++;
    if (i == 4)
        return (1);
    return (0);
}

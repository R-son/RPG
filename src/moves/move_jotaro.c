/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** move_jotaro
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

void move_jotaro_up_down(game *ga)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp) && ga->jo.pos.y > 0) {
        if (ga->jo.jo_rect.top != 99)
            ga->jo.jo_rect.top = 99;
        ga->jo.jo_rect.left += 32;
        if (ga->jo.jo_rect.left >= 96)
            ga->jo.jo_rect.left = 0;
        ga->jo.pos.y -= 5;
        sfSprite_setTextureRect(ga->jo.s_jotaro, ga->jo.jo_rect);
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown) && ga->jo.pos.y < 1000) {
        if (ga->jo.jo_rect.top != 0)
            ga->jo.jo_rect.top = 0;
        ga->jo.jo_rect.left += 32;
        if (ga->jo.jo_rect.left >= 96)
            ga->jo.jo_rect.left = 0;
        ga->jo.pos.y += 5;
        sfSprite_setTextureRect(ga->jo.s_jotaro, ga->jo.jo_rect);
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
    }
}

void move_jotaro_left_right(game *ga)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft) && ga->jo.pos.x > 0) {
        if (ga->jo.jo_rect.top != 33)
            ga->jo.jo_rect.top = 33;
        ga->jo.jo_rect.left += 32;
        if (ga->jo.jo_rect.left >= 96)
            ga->jo.jo_rect.left = 0;
        ga->jo.pos.x -= 5;
        sfSprite_setTextureRect(ga->jo.s_jotaro, ga->jo.jo_rect);
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight) && ga->jo.pos.x < 1890) {
        if (ga->jo.jo_rect.top != 66)
            ga->jo.jo_rect.top = 66;
        ga->jo.jo_rect.left += 32;
        if (ga->jo.jo_rect.left >= 96)
            ga->jo.jo_rect.left = 0;
        ga->jo.pos.x += 5;
        sfSprite_setTextureRect(ga->jo.s_jotaro, ga->jo.jo_rect);
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
    }
}

void move_turning_around(game *ga)
{
    sfSprite_setTextureRect(ga->jo.s_turning_around,
                            (sfIntRect) {ga->fm.xrect, 0, 100, 128});
    if (sfTime_asSeconds(sfClock_getElapsedTime(ga->cl_m.c_ta)) > 0.12) {
        sfClock_restart(ga->cl_m.c_ta);
        ga->fm.xrect += 100;
        if (ga->fm.xrect == 900)
            ga->fm.xrect = 0;
    }
}

void move_jotaro(game *ga)
{
    move_jotaro_up_down(ga);
    move_jotaro_left_right(ga);
}

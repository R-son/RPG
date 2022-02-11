/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** middle redirection
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

void middle_to_volcan_foret(sfRenderWindow *window, game *ga, sfMusic *music)
{
    if ((ga->jo.pos.y <= 10 && (ga->jo.pos.x > 400 && ga->jo.pos.x < 620))
        && sfKeyboard_isKeyPressed(sfKeyUp)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 860;
        ga->jo.pos.y = 980;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        volcan_farm(window, ga);
    }
    if ((ga->jo.pos.y <= 10 && (ga->jo.pos.x > 1050 && ga->jo.pos.x < 1110))
        && sfKeyboard_isKeyPressed(sfKeyUp)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 910;
        ga->jo.pos.y = 980;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        foret_farm(window, ga);
    }
}

void middle_to_port_ville(sfRenderWindow *window, game *ga, sfMusic *music)
{
    if ((ga->jo.pos.x <= 20 && (ga->jo.pos.y > 500 && ga->jo.pos.y < 550))
        && sfKeyboard_isKeyPressed(sfKeyLeft)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 1890;
        ga->jo.pos.y = 320;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        port_path(window, ga);
    }
    if ((ga->jo.pos.x >= 1870 && (ga->jo.pos.y > 475 && ga->jo.pos.y < 555))
        && sfKeyboard_isKeyPressed(sfKeyRight)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 10;
        ga->jo.pos.y = 500;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        ville_farm(window, ga);
    }
}

void middle_redirection(sfRenderWindow *window, game *ga, sfMusic *music)
{
    if ((ga->jo.pos.y == 790 && (ga->jo.pos.x > 870 && ga->jo.pos.x < 910))
        && sfKeyboard_isKeyPressed(sfKeyUp)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 970;
        ga->jo.pos.y = 970;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        ga->me.spriteback = cutscene_background();
        spawn(window, ga);
    }
    if (sfKeyboard_isKeyPressed(sfKeyN)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 910;
        ga->jo.pos.y = 980;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        neige_farm(window, ga);
    }
    middle_to_volcan_foret(window, ga, music);
    middle_to_port_ville(window, ga, music);
}

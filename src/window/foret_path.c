/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** path zone foret
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

void foret_path_display(sfRenderWindow* w, game *ga)
{
    int i = 0;

    display_window(w, ga);
    sfRenderWindow_drawSprite(w, ga->jo.s_jotaro, NULL);
    display_xp(w, ga);
    (ga->jo.pos.x <= 955 ? i++ : (ga->jo.pos.x = 955));
    (ga->jo.pos.x >= 910 ? i++ : (ga->jo.pos.x = 910));
    (ga->jo.pos.y <= 980 ? i++ : (ga->jo.pos.y = 980));
    (ga->jo.pos.y >= 10 ? i++ : (ga->jo.pos.y = 10));
    if (i == 4)
        move_jotaro(ga);
    while (sfRenderWindow_pollEvent(w, &ga->me.ev)) {
        if (ga->me.ev.type == sfEvtClosed)
            sfRenderWindow_close(w);
    }
}

void foret_path_redirection(sfRenderWindow* window, game *ga, sfMusic *music)
{
    if ((ga->jo.pos.y >= 980 && sfKeyboard_isKeyPressed(sfKeyDown))) {
        sfMusic_stop(music);
        ga->jo.pos.x = 990;
        ga->jo.pos.y = 10;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        foret_farm(window, ga);
    }
    if ((ga->jo.pos.y <= 10 && sfKeyboard_isKeyPressed(sfKeyUp))) {
        sfMusic_stop(music);
        ga->jo.pos.x = 880;
        ga->jo.pos.y = 980;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        foret_final(window, ga);
    }
}

void foret_path(sfRenderWindow* window, game *ga)
{
    int p = 0;
    sfMusic *music = foret_2();

    ga->me.spriteback = fo_path_background();
    while (sfRenderWindow_isOpen(window)) {
        foret_path_display(window, ga);
        if (p == 0) {
            foret_path_redirection(window, ga, music);
            move_all_monster(ga);
        }
        p = window_to_pause(window, ga, music);
    }
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
}

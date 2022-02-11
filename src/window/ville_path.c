/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** path zone ville
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

int ville_path_obstacle(game *ga)
{
    sfVector2f a = {1045, 485};
    sfVector2f b = {1900, 990};
    sfVector2f c = {135, 0};
    sfVector2f d = {805, 235};
    sfVector2f e = {1035, 0};
    sfVector2f f = {1750, 235};

    if ((obstacle_gestion(ga, a, b) == 1)
        && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1))
        return (1);
    return (0);
}

void ville_path_display(sfRenderWindow* w, game *ga)
{
    int i = 0;

    display_window(w, ga);
    sfRenderWindow_drawSprite(w, ga->jo.s_jotaro, NULL);
    display_xp(w, ga);
    (ga->jo.pos.x <= 1900 ? i++ : (ga->jo.pos.x = 1900));
    (ga->jo.pos.x >= 10 ? i++ : (ga->jo.pos.x = 10));
    (ga->jo.pos.y <= 980 ? i++ : (ga->jo.pos.y = 980));
    (ga->jo.pos.y >= 10 ? i++ : (ga->jo.pos.y = 10));
    if (i == 4 && (ville_path_obstacle(ga) == 1))
        move_jotaro(ga);
    while (sfRenderWindow_pollEvent(w, &ga->me.ev)) {
        if (ga->me.ev.type == sfEvtClosed)
            sfRenderWindow_close(w);
    }
}

void ville_path_redirection(sfRenderWindow* window, game *ga, sfMusic *music)
{
    if ((ga->jo.pos.y >= 980 && (ga->jo.pos.x > 145 && ga->jo.pos.x < 355))
        && sfKeyboard_isKeyPressed(sfKeyDown)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 940;
        ga->jo.pos.y = 10;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        ville_farm(window, ga);
    }
    if ((ga->jo.pos.y <= 10 && (ga->jo.pos.x > 805 && ga->jo.pos.x < 1045))
        && sfKeyboard_isKeyPressed(sfKeyUp)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 930;
        ga->jo.pos.y = 980;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        ville_final(window, ga);
    }
}

void ville_path(sfRenderWindow* window, game *ga)
{
    int p = 0;
    sfMusic *music = ville_2();

    ga->me.spriteback = vi_path_background();
    while (sfRenderWindow_isOpen(window)) {
        ville_path_display(window, ga);
        gestion_xp(ga);
        if (p == 0) {
            ville_path_redirection(window, ga, music);
            move_all_monster(ga);
        }
        p = window_to_pause(window, ga, music);
    }
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
}

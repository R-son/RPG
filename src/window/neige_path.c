/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** path zone neige
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

int neige_path_obstacle(game *ga)
{
    sfVector2f a = {0, 555};
    sfVector2f b = {240, 990};
    sfVector2f c = {235, 530};
    sfVector2f d = {360, 990};
    sfVector2f e = {355, 510};
    sfVector2f f = {510, 990};
    sfVector2f g = {505, 475};
    sfVector2f h = {590, 990};
    sfVector2f i = {1065, 580};
    sfVector2f j = {1280, 990};
    sfVector2f k = {1655, 575};
    sfVector2f l = {1990, 990};

    if ((obstacle_gestion(ga, a, b) == 1) && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1)
        && (obstacle_gestion(ga, g, h) == 1)
        && (obstacle_gestion(ga, i, j) == 1)
        && (obstacle_gestion(ga, k, l) == 1))
        return (1);
    return (0);
}

void neige_path_display(sfRenderWindow* w, game *ga)
{
    int i = 0;

    display_window(w, ga);
    sfRenderWindow_drawSprite(w, ga->jo.s_jotaro, NULL);
    display_xp(w, ga);
    (ga->jo.pos.x <= 1980 ? i++ : (ga->jo.pos.x = 1980));
    (ga->jo.pos.x >= 10 ? i++ : (ga->jo.pos.x = 10));
    (ga->jo.pos.y <= 590 ? i++ : (ga->jo.pos.y = 590));
    (ga->jo.pos.y >= 340 ? i++ : (ga->jo.pos.y = 340));
    if (i == 4 && (neige_path_obstacle(ga) == 1))
        move_jotaro(ga);
    while (sfRenderWindow_pollEvent(w, &ga->me.ev)) {
        if (ga->me.ev.type == sfEvtClosed)
            sfRenderWindow_close(w);
    }
}

void neige_path_redirection(sfRenderWindow* window, game *ga, sfMusic *music)
{
    if ((ga->jo.pos.x <= 10) && sfKeyboard_isKeyPressed(sfKeyLeft)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 1890;
        ga->jo.pos.y = 290;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        neige_farm(window, ga);
    }
    if ((ga->jo.pos.x >= 1890 && sfKeyboard_isKeyPressed(sfKeyRight))) {
        sfMusic_stop(music);
        ga->jo.pos.x = 10;
        ga->jo.pos.y = 170;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        neige_final(window, ga);
    }
}

void neige_path(sfRenderWindow* window, game *ga)
{
    sfMusic *music = neige_2();
    int p = 0;

    ga->me.spriteback = ne_path_background();
    while (sfRenderWindow_isOpen(window)) {
        neige_path_display(window, ga);
        if (p == 0) {
            neige_path_redirection(window, ga, music);
            move_all_monster(ga);
        }
        p = window_to_pause(window, ga, music);
    }
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
}

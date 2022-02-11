/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** farm zone port
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

int port_obstacle_b(game *ga)
{
    sfVector2f a = {90, 470};
    sfVector2f b = {250, 490};
    sfVector2f c = {250, 440};
    sfVector2f d = {670, 490};
    sfVector2f e = {670, 410};
    sfVector2f f = {920, 490};
    sfVector2f g = {920, 385};
    sfVector2f h = {1530, 490};
    sfVector2f i = {1530, 360};
    sfVector2f j = {1920, 490};

    if ((obstacle_gestion(ga, a, b) == 1)
        && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1)
        && (obstacle_gestion(ga, g, h) == 1)
        && (obstacle_gestion(ga, i, j) == 1))
        return (1);
    return (0);
}

int port_obstacle(game *ga)
{
    sfVector2f a = {930, 275};
    sfVector2f b = {1545, 315};
    sfVector2f c = {685, 275};
    sfVector2f d = {930, 340};
    sfVector2f e = {255, 275};
    sfVector2f f = {685, 365};
    sfVector2f g = {110, 275};
    sfVector2f h = {255, 395};
    sfVector2f i = {5, 275};
    sfVector2f j = {110, 425};

    if ((port_obstacle_b(ga) == 1)
        && (obstacle_gestion(ga, a, b) == 1)
        && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1)
        && (obstacle_gestion(ga, g, h) == 1)
        && (obstacle_gestion(ga, i, j) == 1))
        return (1);
    return (0);
}

void port_display(sfRenderWindow* w, game *ga)
{
    int i = 0;

    display_window(w, ga);
    sfRenderWindow_drawSprite(w, ga->jo.s_jotaro, NULL);
    display_xp(w, ga);
    (ga->jo.pos.x <= 1900 ? i++ : (ga->jo.pos.x = 1900));
    (ga->jo.pos.x >= 10 ? i++ : (ga->jo.pos.x = 10));
    (ga->jo.pos.y <= 485 ? i++ : (ga->jo.pos.y = 485));
    (ga->jo.pos.y >= 280 ? i++ : (ga->jo.pos.y = 280));
    if (i == 4 && (port_obstacle(ga) == 1))
        move_jotaro(ga);
    while (sfRenderWindow_pollEvent(w, &ga->me.ev)) {
        if (ga->me.ev.type == sfEvtClosed)
            sfRenderWindow_close(w);
    }
}

void port_path_redirection(sfRenderWindow *window, game *ga, sfMusic *music)
{
    if ((ga->jo.pos.x >= 1890 && (ga->jo.pos.y > 280 && ga->jo.pos.y < 360))
        && sfKeyboard_isKeyPressed(sfKeyRight)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 20;
        ga->jo.pos.y = 525;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        middle(window, ga);
    }
    if ((ga->jo.pos.x <= 20 && (ga->jo.pos.y > 425 && ga->jo.pos.y < 490))
        && sfKeyboard_isKeyPressed(sfKeyLeft)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 1890;
        ga->jo.pos.y = 625;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        port_farm(window, ga);
    }
}

void port_path(sfRenderWindow* window, game *ga)
{
    int p = 0;
    sfMusic *music = port_1();

    ga->me.spriteback = po_path_background();
    while (sfRenderWindow_isOpen(window)) {
        port_display(window, ga);
        if (p == 0) {
            port_path_redirection(window, ga, music);
            move_all_monster(ga);
        }
        p = window_to_pause(window, ga, music);
    }
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
}

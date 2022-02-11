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

int port_farm_obstacle(game *ga)
{
    sfVector2f a = {1645, 0};
    sfVector2f b = {1920, 580};
    sfVector2f c = {1605, 480};
    sfVector2f d = {1680, 580};
    sfVector2f e = {1555, 690};
    sfVector2f f = {1920, 1080};

    if ((obstacle_gestion(ga, a, b) == 1)
        && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1))
        return (1);
    return (0);
}

void port_farm_display(sfRenderWindow* w, game *ga)
{
    int i = 0;

    display_window(w, ga);
    sfRenderWindow_drawSprite(w, ga->jo.s_jotaro, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_port_monster1, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_port_monster2, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_port_monster3, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_port_monster4, NULL);
    display_xp(w, ga);
    (ga->jo.pos.x <= 1900 ? i++ : (ga->jo.pos.x = 1900));
    (ga->jo.pos.x >= 1300 ? i++ : (ga->jo.pos.x = 1300));
    (ga->jo.pos.y <= 980 ? i++ : (ga->jo.pos.y = 980));
    (ga->jo.pos.y >= 10 ? i++ : (ga->jo.pos.y = 10));
    if (i == 4 && (port_farm_obstacle(ga) == 1))
        move_jotaro(ga);
    while (sfRenderWindow_pollEvent(w, &ga->me.ev)) {
        if (ga->me.ev.type == sfEvtClosed)
            sfRenderWindow_close(w);
    }
}

void port_farm_redirection(sfRenderWindow* window, game *ga, sfMusic *music)
{
    if ((ga->jo.pos.x >= 1880 && (ga->jo.pos.y > 580 && ga->jo.pos.y < 690))
        && sfKeyboard_isKeyPressed(sfKeyRight)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 20;
        ga->jo.pos.y = 470;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        port_path(window, ga);
    }
    if ((ga->jo.pos.y <= 30 && sfKeyboard_isKeyPressed(sfKeyUp))) {
        sfMusic_stop(music);
        ga->jo.pos.x = 940;
        ga->jo.pos.y = 980;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        port_final(window, ga);
    }
}

void port_farm(sfRenderWindow *window, game *ga)
{
    int p = 0;
    sfMusic *music = port_2();

    ga->me.spriteback = po_farm_background();
    while (sfRenderWindow_isOpen(window)) {
        port_farm_display(window, ga);
        gestion_xp(ga);
        gestion_monster_port(window, ga, music);
        if (p == 0) {
            port_farm_redirection(window, ga, music);
            move_all_monster(ga);
        }
        p = window_to_pause(window, ga, music);
    }
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
}

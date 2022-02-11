/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** path zone volcan
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

int volcan_path_obstacle_b(game *ga)
{
    sfVector2f a = {625, 390};
    sfVector2f b = {690, 440};
    sfVector2f c = {550, 30};
    sfVector2f d = {730, 200};
    sfVector2f e = {780, 130};
    sfVector2f f = {980, 170};
    sfVector2f g = {715, 275};
    sfVector2f h = {745, 315};
    sfVector2f i = {820, 90};
    sfVector2f j = {1890, 980};
    sfVector2f k = {0, 0};
    sfVector2f l = {640, 400};

    if ((obstacle_gestion(ga, a, b) == 1)
        && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1)
        && (obstacle_gestion(ga, g, h) == 1)
        && (obstacle_gestion(ga, i, j) == 1)
        && (obstacle_gestion(ga, k, l) == 1))
        return (1);
    return (0);
}

int volcan_path_obstacle(game *ga)
{
    sfVector2f a = {0, 0};
    sfVector2f b = {550, 920};
    sfVector2f c = {675, 870};
    sfVector2f d = {1890, 980};
    sfVector2f e = {725, 630};
    sfVector2f f = {1890, 980};
    sfVector2f g = {550, 575};
    sfVector2f h = {680, 660};
    sfVector2f i = {550, 435};
    sfVector2f j = {780, 580};

    if ((volcan_path_obstacle_b(ga) == 1)
        && (obstacle_gestion(ga, a, b) == 1)
        && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1)
        && (obstacle_gestion(ga, g, h) == 1)
        && (obstacle_gestion(ga, i, j) == 1))
        return (1);
    return (0);
}

void volcan_path_display(sfRenderWindow* w, game *ga)
{
    int i = 0;

    display_window(w, ga);
    sfRenderWindow_drawSprite(w, ga->jo.s_jotaro, NULL);
    display_xp(w, ga);
    (ga->jo.pos.x <= 950 ? i++ : (ga->jo.pos.x = 950));
    (ga->jo.pos.x >= 10 ? i++ : (ga->jo.pos.x = 10));
    (ga->jo.pos.y <= 950 ? i++ : (ga->jo.pos.y = 950));
    (ga->jo.pos.y >= 10 ? i++ : (ga->jo.pos.y = 10));
    if (i == 4 && (volcan_path_obstacle(ga) == 1))
        move_jotaro(ga);
    while (sfRenderWindow_pollEvent(w, &ga->me.ev)) {
        if (ga->me.ev.type == sfEvtClosed)
            sfRenderWindow_close(w);
    }
}

void volcan_path_redirection(sfRenderWindow* window, game *ga, sfMusic *music)
{
    if ((ga->jo.pos.y <= 10) && (sfKeyboard_isKeyPressed(sfKeyUp))) {
        sfMusic_stop(music);
        ga->jo.pos.x = 930;
        ga->jo.pos.y = 980;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        volcan_final(window, ga);
    }
    if ((ga->jo.pos.x <= 10) && (sfKeyboard_isKeyPressed(sfKeyLeft))) {
        sfMusic_stop(music);
        ga->jo.pos.x = 1890;
        ga->jo.pos.y = 195;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        volcan_farm(window, ga);
    }
}

void volcan_path(sfRenderWindow* window, game *ga)
{
    sfMusic *music = volcan_2();
    int p = 0;

    ga->me.spriteback = vo_path_background();
    while (sfRenderWindow_isOpen(window)) {
        volcan_path_display(window, ga);
        if (p == 0) {
            volcan_path_redirection(window, ga, music);
            move_all_monster(ga);
        }
        p = window_to_pause(window, ga, music);
    }
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
}

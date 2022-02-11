/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** farm zone neige
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

int neige_farm_obstacle_b(game *ga)
{
    sfVector2f a = {1315, 320};
    sfVector2f b = {1420, 360};
    sfVector2f c = {1415, 355};
    sfVector2f d = {1585, 440};
    sfVector2f e = {1575, 425};
    sfVector2f f = {1990, 490};
    sfVector2f g = {1360, 150};
    sfVector2f h = {1430, 185};
    sfVector2f i = {1425, 125};
    sfVector2f j = {1610, 155};
    sfVector2f k = {1605, 120};
    sfVector2f l = {1990, 125};

    if ((obstacle_gestion(ga, a, b) == 1)
        && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1)
        && (obstacle_gestion(ga, g, h) == 1)
        && (obstacle_gestion(ga, i, j) == 1)
        && (obstacle_gestion(ga, k, l) == 1))
        return (1);
    return (0);
}

int neige_farm_obstacle(game *ga)
{
    sfVector2f a = {255, 970};
    sfVector2f b = {515, 990};
    sfVector2f c = {0, 230};
    sfVector2f d = {400, 285};
    sfVector2f e = {395, 285};
    sfVector2f f = {580, 445};
    sfVector2f g = {0, 440};
    sfVector2f h = {520, 715};
    sfVector2f i = {0, 0};
    sfVector2f j = {425, 135};

    if ((neige_farm_obstacle_b(ga) == 1)
        && (obstacle_gestion(ga, a, b) == 1)
        && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1)
        && (obstacle_gestion(ga, g, h) == 1)
        && (obstacle_gestion(ga, i, j) == 1))
        return (1);
    return (0);
}

void neige_farm_display(sfRenderWindow* w, game *ga)
{
    int i = 0;

    display_window(w, ga);
    sfRenderWindow_drawSprite(w, ga->jo.s_jotaro, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_snow_monster1, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_snow_monster2, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_snow_monster3, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_snow_monster4, NULL);
    display_xp(w, ga);
    (ga->jo.pos.x <= 1980 ? i++ : (ga->jo.pos.x = 1980));
    (ga->jo.pos.x >= 245 ? i++ : (ga->jo.pos.x = 245));
    (ga->jo.pos.y <= 980 ? i++ : (ga->jo.pos.y = 980));
    (ga->jo.pos.y >= 10 ? i++ : (ga->jo.pos.y = 10));
    if (i == 4 && (neige_farm_obstacle(ga) == 1))
        move_jotaro(ga);
    while (sfRenderWindow_pollEvent(w, &ga->me.ev)) {
        if (ga->me.ev.type == sfEvtClosed)
            sfRenderWindow_close(w);
    }
}

void neige_farm_redirection(sfRenderWindow* window, game *ga, sfMusic *music)
{
    if ((ga->jo.pos.y >= 980)
        && sfKeyboard_isKeyPressed(sfKeyDown)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 1600;
        ga->jo.pos.y = 10;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        middle(window, ga);
    }
    if ((ga->jo.pos.x >= 1890 && (ga->jo.pos.y > 140 && ga->jo.pos.y < 450))
        && sfKeyboard_isKeyPressed(sfKeyRight)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 10;
        ga->jo.pos.y = 460;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        neige_path(window, ga);
    }
}

void neige_farm(sfRenderWindow* window, game *ga)
{
    int p = 0;
    sfMusic *music = neige_1();

    ga->me.spriteback = ne_farm_background();
    while (sfRenderWindow_isOpen(window)) {
        neige_farm_display(window, ga);
        gestion_xp(ga);
        gestion_monster_neige(window, ga, music);
        if (p == 0) {
            neige_farm_redirection(window, ga, music);
            move_all_monster(ga);
        }
        p = window_to_pause(window, ga, music);
    }
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
}

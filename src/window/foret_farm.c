/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** farm zone foret
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

int foret_farm_obstacle_b(game *ga)
{
    sfVector2f a = {0, 635};
    sfVector2f b = {535, 700};
    sfVector2f c = {530, 700};
    sfVector2f d = {875, 980};
    sfVector2f e = {965, 700};
    sfVector2f f = {1900, 980};
    sfVector2f g = {1300, 620};
    sfVector2f h = {1900, 980};

    if ((obstacle_gestion(ga, a, b) == 1)
        && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1)
        && (obstacle_gestion(ga, g, h) == 1))
        return (1);
    return (0);
}

int foret_farm_obstacle(game *ga)
{
    sfVector2f a = {705, 250};
    sfVector2f b = {1040, 445};
    sfVector2f c = {10, 10};
    sfVector2f d = {540, 175};
    sfVector2f e = {540, 0};
    sfVector2f f = {910, 90};
    sfVector2f g = {1055, 0};
    sfVector2f h = {1900, 140};

    if ((foret_farm_obstacle_b(ga) == 1)
        && (obstacle_gestion(ga, a, b) == 1)
        && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1)
        && (obstacle_gestion(ga, g, h) == 1))
        return (1);
    return (0);
}

void foret_farm_display(sfRenderWindow* w, game *ga)
{
    int i = 0;

    display_window(w, ga);
    sfRenderWindow_drawSprite(w, ga->jo.s_jotaro, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_forest_monster1, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_forest_monster2, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_forest_monster3, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_forest_monster4, NULL);
    display_xp(w, ga);
    (ga->jo.pos.x <= 1390 ? i++ : (ga->jo.pos.x = 1390));
    (ga->jo.pos.x >= 345 ? i++ : (ga->jo.pos.x = 345));
    (ga->jo.pos.y <= 980 ? i++ : (ga->jo.pos.y = 980));
    (ga->jo.pos.y >= 10 ? i++ : (ga->jo.pos.y = 10));
    if (i == 4 && (foret_farm_obstacle(ga) == 1))
        move_jotaro(ga);
    while (sfRenderWindow_pollEvent(w, &ga->me.ev)) {
        if (ga->me.ev.type == sfEvtClosed)
            sfRenderWindow_close(w);
    }
}

void foret_farm_redirection(sfRenderWindow* window, game *ga, sfMusic *music)
{
    if ((ga->jo.pos.y >= 980 && (ga->jo.pos.x > 875 && ga->jo.pos.x < 965))
        && sfKeyboard_isKeyPressed(sfKeyDown)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 1080;
        ga->jo.pos.y = 10;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        middle(window, ga);
    }
    if ((ga->jo.pos.y <= 10 && sfKeyboard_isKeyPressed(sfKeyUp))) {
        sfMusic_stop(music);
        ga->jo.pos.x = 930;
        ga->jo.pos.y = 890;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        foret_path(window, ga);
    }
}

void foret_farm(sfRenderWindow* window, game *ga)
{
    int p = 0;
    sfMusic *music = foret_1();

    ga->me.spriteback = fo_farm_background();
    while (sfRenderWindow_isOpen(window)) {
        foret_farm_display(window, ga);
        gestion_xp(ga);
        gestion_monster_foret(window, ga, music);
        if (p == 0) {
            foret_farm_redirection(window, ga, music);
            move_all_monster(ga);
        }
        p = window_to_pause(window, ga, music);
    }
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
}

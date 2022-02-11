/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** farm zone ville
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

int ville_farm_obstacle_b(game *ga)
{
    sfVector2f a = {760, 405};
    sfVector2f b = {1130, 645};
    sfVector2f c = {10, 530};
    sfVector2f d = {550, 1000};
    sfVector2f e = {540, 735};
    sfVector2f f = {880, 1000};
    sfVector2f g = {1335, 555};
    sfVector2f h = {1900, 1000};
    sfVector2f i = {1005, 735};
    sfVector2f j = {1900, 1000};

    if ((obstacle_gestion(ga, a, b) == 1)
        && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1)
        && (obstacle_gestion(ga, g, h) == 1)
        && (obstacle_gestion(ga, i, j) == 1))
        return (1);
    return (0);
}

int ville_farm_obstacle(game *ga)
{
    sfVector2f a = {10, 10};
    sfVector2f b = {530, 480};
    sfVector2f c = {10, 10};
    sfVector2f d = {880, 255};
    sfVector2f e = {1010, 0};
    sfVector2f f = {1900, 255};
    sfVector2f g = {1335, 10};
    sfVector2f h = {1900, 475};

    if ((ville_farm_obstacle_b(ga) == 1)
        && (obstacle_gestion(ga, a, b) == 1)
        && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1)
        && (obstacle_gestion(ga, g, h) == 1))
        return (1);
    return (0);
}

void ville_farm_display(sfRenderWindow* w, game *ga)
{
    int i = 0;

    display_window(w, ga);
    sfRenderWindow_drawSprite(w, ga->jo.s_jotaro, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_city_monster1, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_city_monster2, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_city_monster3, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_city_monster4, NULL);
    display_xp(w, ga);
    (ga->jo.pos.x <= 1900 ? i++ : (ga->jo.pos.x = 1900));
    (ga->jo.pos.x >= 10 ? i++ : (ga->jo.pos.x = 10));
    (ga->jo.pos.y <= 980 ? i++ : (ga->jo.pos.y = 980));
    (ga->jo.pos.y >= 10 ? i++ : (ga->jo.pos.y = 10));
    if (i == 4 && (ville_farm_obstacle(ga) == 1))
        move_jotaro(ga);
    while (sfRenderWindow_pollEvent(w, &ga->me.ev)) {
        if (ga->me.ev.type == sfEvtClosed)
            sfRenderWindow_close(w);
    }
}

void ville_farm_redirection(sfRenderWindow* window, game *ga, sfMusic *music)
{
    if ((ga->jo.pos.x <= 10 && (ga->jo.pos.y > 485 && ga->jo.pos.y < 550))
        && sfKeyboard_isKeyPressed(sfKeyLeft)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 1870;
        ga->jo.pos.y = 505;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        middle(window, ga);
    }
    if ((ga->jo.pos.y <= 10 && sfKeyboard_isKeyPressed(sfKeyUp))) {
        sfMusic_stop(music);
        ga->jo.pos.x = 250;
        ga->jo.pos.y = 980;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        ville_path(window, ga);
    }
}

void ville_farm(sfRenderWindow* window, game *ga)
{
    int p = 0;
    sfMusic *music = ville_1();

    ga->me.spriteback = vi_farm_background();
    while (sfRenderWindow_isOpen(window)) {
        ville_farm_display(window, ga);
        gestion_monster_ville(window, ga, music);
        gestion_xp(ga);
        if (p == 0) {
            ville_farm_redirection(window, ga, music);
            move_all_monster(ga);
        }
        p = window_to_pause(window, ga, music);
    }
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
}

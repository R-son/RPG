/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** spawn window
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

void spawn_event(sfRenderWindow* window, game *ga, sfMusic *music)
{
    if ((ga->jo.pos.y >= 970 && (ga->jo.pos.x > 850 && ga->jo.pos.x < 1100))
        && sfKeyboard_isKeyPressed(sfKeyDown)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 890;
        ga->jo.pos.y = 790;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        middle(window, ga);
    }
}

void spawn_close(sfEvent ev, sfRenderWindow* window)
{
    if (ev.type == sfEvtClosed)
        sfRenderWindow_close(window);
}

void display_spawn(sfRenderWindow *window, game *ga)
{
    display_window(window, ga);
    sfRenderWindow_drawSprite(window, ga->jo.s_jotaro, NULL);
    display_xp(window, ga);
}

void spawn(sfRenderWindow* window, game *ga)
{
    sfVector2f a = {940, 795};
    sfVector2f b = {1000, 870};
    sfMusic *music = spawn_music();
    int p = 0;

    ga->jo.star_ball = create_star_ball(ga);
    while (sfRenderWindow_isOpen(window)) {
        display_spawn(window, ga);
        if (obstacle_gestion(ga, a, b) == 1 && (p == 0))
            move_jotaro(ga);
        p = window_to_pause(window, ga, music);
        spawn_event(window, ga, music);
        while (sfRenderWindow_pollEvent(window, &ga->me.ev))
            spawn_close(ga->me.ev, window);
    }
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
}

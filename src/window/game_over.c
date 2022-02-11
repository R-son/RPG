/*
** EPITECH PROJECT, 2020
** game over
** File description:
** game over
*/

#include "my.h"

void over(sfRenderWindow* win, game *ga)
{
    sfEvent ev;
    sfMusic *music = over_music();

    ga->over.sp_over = display_over();
    while (sfRenderWindow_isOpen(win)) {
        sfRenderWindow_display(win);
        sfRenderWindow_drawSprite(win, ga->over.sp_over, NULL);
        while (sfRenderWindow_pollEvent(win, &ev)) {
            close_window(win, ev);
            o_events(win, ev, music);
        }
    }
}

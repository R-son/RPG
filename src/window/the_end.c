/*
** EPITECH PROJECT, 2020
** the_end.c
** File description:
** ending
*/

#include "my.h"

void end(sfRenderWindow* win, game *ga)
{
    sfEvent ev;
    sfMusic *music = end_music();

    ga->over.sp_end = display_end();
    while (sfRenderWindow_isOpen(win)) {
        sfRenderWindow_display(win);
        sfRenderWindow_drawSprite(win, ga->over.sp_end, NULL);
        while (sfRenderWindow_pollEvent(win, &ev)) {
            end_events(win, ev, music);
            close_window(win, ev);
        }
    }
}

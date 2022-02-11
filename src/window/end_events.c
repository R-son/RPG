/*
** EPITECH PROJECT, 2020
** end_events
** File description:
** ending_events
*/

#include "my.h"

void end_events(sfRenderWindow *window, sfEvent ev, sfMusic *music)
{
    sfVector2f rgt = {0, 0};
    sfVector2f lft = {1920, 1080};
    sfVector2i mouse;

    mouse.x = sfMouse_getPositionRenderWindow(window).x;
    mouse.y = sfMouse_getPositionRenderWindow(window).y;
    if (mouse.x >= rgt.x && mouse.y >= rgt.y
        && mouse.x <= lft.x && mouse.y <= lft.y) {
        if (ev.type == sfEvtMouseButtonPressed) {
            sfMusic_stop(music);
            sfMusic_destroy(music);
            sfRenderWindow_close(window);
        }
    }
}

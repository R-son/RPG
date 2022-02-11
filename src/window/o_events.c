/*
** EPITECH PROJECT, 2020
** over_events
** File description:
** over events
*/

#include "my.h"

void o_events(sfRenderWindow *window, sfEvent ev, sfMusic *music)
{
    sfVector2f rgt = {520, 590};
    sfVector2f lft = {1500, 850};
    sfVector2i mouse;

    mouse.x = sfMouse_getPositionRenderWindow(window).x;
    mouse.y = sfMouse_getPositionRenderWindow(window).y;
    if (mouse.x >= rgt.x && mouse.y >= rgt.y
        && mouse.x <= lft.x && mouse.y <= lft.y) {
        if (ev.type == sfEvtMouseButtonPressed) {
            sfMusic_stop(music);
            sfMusic_destroy(music);
            launch_menu(window);
        }
    }
}

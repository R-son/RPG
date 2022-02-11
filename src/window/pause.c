/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** pause window
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

void sheet_gestion(sfRenderWindow* win, int nb, sfSprite *sp, sfIntRect rect)
{
    rect.left = nb;
    sfSprite_setTextureRect(sp, rect);
    sfRenderWindow_drawSprite(win, sp, NULL);
}

void p_menu_event(sfRenderWindow* w, sfSprite *menu, game *ga, sfMusic *m)
{
    sfVector2f rgt = sfSprite_getPosition(menu);
    sfVector2f lft = {rgt.x + 250, rgt.y + 69};
    sfVector2i mouse;
    sfIntRect rect = {0, 0, 250, 69};

    mouse.x = sfMouse_getPositionRenderWindow(w).x;
    mouse.y = sfMouse_getPositionRenderWindow(w).y;
    if (mouse.x >= rgt.x && mouse.y >= rgt.y
        && mouse.x <= lft.x && mouse.y <= lft.y) {
        sheet_gestion(w, 250, menu, rect);
        if (ga->me.ev.type == sfEvtMouseButtonPressed) {
            sheet_gestion(w, 500, menu, rect);
            sfMusic_stop(m);
            launch_menu(w);
        }
    } else
        sheet_gestion(w, 0, menu, rect);
}

void p_exit_event(sfRenderWindow* window, sfSprite *exit, game *ga)
{
    sfVector2f rgt = sfSprite_getPosition(exit);
    sfVector2f lft = {rgt.x + 250, rgt.y + 69};
    sfVector2i mouse;
    sfIntRect rect = {0, 0, 250, 69};

    mouse.x = sfMouse_getPositionRenderWindow(window).x;
    mouse.y = sfMouse_getPositionRenderWindow(window).y;
    if (mouse.x >= rgt.x && mouse.y >= rgt.y
        && mouse.x <= lft.x && mouse.y <= lft.y) {
        sheet_gestion(window, 250, exit, rect);
        if (ga->me.ev.type == sfEvtMouseButtonPressed) {
            sheet_gestion(window, 500, exit, rect);
            sfRenderWindow_close(window);
        }
    } else
        sheet_gestion(window, 0, exit, rect);
}

int p_play_event(sfRenderWindow* window, sfSprite *play, game *ga, int p)
{
    sfVector2f rgt = sfSprite_getPosition(play);
    sfVector2f lft = {rgt.x + 250, rgt.y + 69};
    sfVector2i mouse;
    sfIntRect rect = {0, 0, 250, 69};

    mouse.x = sfMouse_getPositionRenderWindow(window).x;
    mouse.y = sfMouse_getPositionRenderWindow(window).y;
    if (mouse.x >= rgt.x && mouse.y >= rgt.y
        && mouse.x <= lft.x && mouse.y <= lft.y) {
        sheet_gestion(window, 250, play, rect);
        if (ga->me.ev.type == sfEvtMouseButtonPressed) {
            sheet_gestion(window, 500, play, rect);
            p = 0;
        }
    } else
        sheet_gestion(window, 0, play, rect);
    return (p);
}

int pause(sfRenderWindow* window, game *ga, sfMusic *music)
{
    sfSprite *back = pause_background();
    sfSprite *play = p_play();
    sfSprite *menu = p_menu();
    sfSprite *exit = p_exit();
    static int i = 0;
    static int s = 0;
    int p = 1;

    sfRenderWindow_drawSprite(window, back, NULL);
    place_buttons(window, play, menu, exit);
    if (i == 0 && s == 0) {
        p = p_play_event(window, play, ga, p);
        p_exit_event(window, exit, ga);
        p_menu_event(window, menu, ga, music);
    }
    s = pause_to_status(window, ga, s, i);
    i = pause_to_inventory(window, ga, i, s);
    sfSprite_destroy(back);
    return (p);
}

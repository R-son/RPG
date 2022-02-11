/*
** EPITECH PROJECT, 2020
** menu_events
** File description:
** menu events
*/

#include "my.h"

void htp_redirection(sfRenderWindow *w, game *ga)
{
    if (mouseonsprite(w, ga->me.htp_but, 55, 95) == 0) {
        sfSprite_setTextureRect
            (ga->me.htp_but, (sfIntRect){55, 0, 55, 95});
        if (sfMouse_isButtonPressed (sfMouseLeft)) {
            sfMusic_stop(ga->me.menu_music);
            how(w);
        }
    } else
        sfSprite_setTextureRect
            (ga->me.htp_but, (sfIntRect){0, 0, 55, 95});
}

void destroy_menu(sfRenderWindow* window, game *ga)
{
    sfSprite_destroy(ga->me.sprite_one);
    sfSprite_destroy(ga->me.sprite_two);
    sfMusic_destroy(ga->me.menu_music);
    sfRenderWindow_close(window);
}

void event_quit(sfRenderWindow* window, sfEvent event, sfSprite* sprite)
{
    sfVector2f c = sfSprite_getPosition(sprite);
    sfVector2f d = {c.x + 670, c.y + 185};
    sfVector2i mouse;
    sfIntRect rect = {0, 0, 670, 185};

    mouse.x = sfMouse_getPositionRenderWindow(window).x;
    mouse.y = sfMouse_getPositionRenderWindow(window).y;
    if ((event.type == sfEvtClosed || mouse.x >= c.x) &&
        ((mouse.y >= c.y) && mouse.x <= d.x && mouse.y <= d.y)) {
        rect.left += 670;
        sfSprite_setTextureRect(sprite, rect);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        if (event.type == sfEvtMouseButtonPressed || event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
    if (mouse.x <= c.x || mouse.y <= c.y || mouse.x >= d.x || mouse.y >= d.y) {
        rect.left = 0;
        sfSprite_setTextureRect(sprite, rect);
        sfRenderWindow_drawSprite(window, sprite, NULL);
    }
}

void event_play(sfRenderWindow* window, sfEvent event, game *ga)
{
    sfVector2f a = sfSprite_getPosition(ga->me.sprite_one);
    sfVector2f b = {a.x + 670, a.y + 185};
    sfVector2i m;
    sfIntRect rect = {0, 0, 670, 185};

    m.x = sfMouse_getPositionRenderWindow(window).x;
    m.y = sfMouse_getPositionRenderWindow(window).y;
    if (m.x >= a.x && m.y >= a.y && m.x <= b.x && m.y <= b.y) {
        rect.left += 670;
        sfSprite_setTextureRect(ga->me.sprite_one, rect);
        sfRenderWindow_drawSprite(window, ga->me.sprite_one, NULL);
        if (event.type == sfEvtMouseButtonPressed) {
            sfMusic_stop(ga->me.menu_music);
            cutscene(window, event, ga);
        }
    } if (m.x <= a.x || m.y <= a.y || m.x >= b.x || m.y >= b.y) {
        rect.left = 0;
        sfSprite_setTextureRect(ga->me.sprite_one, rect);
        sfRenderWindow_drawSprite(window, ga->me.sprite_one, NULL);
    }
}

void button_loop(sfRenderWindow* window, game *ga)
{
    sfVector2f pos1 = {0, 520};
    sfVector2f pos2 = {1250, 520};

    sfRenderWindow_drawSprite(window, ga->me.sprite_one, NULL);
    sfRenderWindow_drawSprite(window, ga->me.sprite_two, NULL);
    sfRenderWindow_drawSprite(window, ga->me.htp_but, NULL);
    sfSprite_setPosition(ga->me.sprite_one, pos1);
    sfSprite_setPosition(ga->me.sprite_two, pos2);
}

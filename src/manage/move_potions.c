/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** move potions
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

void potpv_on_square_s(sfRenderWindow *w, game *ga)
{
    sfVector2i m;
    sfSprite *sprite = create_pv_potion();
    sfVector2f pos = {1230, 750};

    m.x = sfMouse_getPositionRenderWindow(w).x;
    m.y = sfMouse_getPositionRenderWindow(w).y;
    pos.x = m.x - 20;
    pos.y = m.y - 20;
    if (ga->me.ev.type == sfEvtMouseButtonPressed) {
        if (m.x >= 1600 && m.y <= 200) {
            ga->jo.money -= ga->jo.prix_pv;
            ga->jo.pot_pv += 1;
            ga->jo.prix_pv += 10;
        }
    }
    sfSprite_setPosition(sprite, pos);
    sfRenderWindow_drawSprite(w, sprite, NULL);
}

void potsb_on_square_s(sfRenderWindow *w, game *ga)
{
    sfVector2i m;
    sfSprite *sprite = create_sb_potion();
    sfVector2f pos = {480, 820};

    m.x = sfMouse_getPositionRenderWindow(w).x;
    m.y = sfMouse_getPositionRenderWindow(w).y;
    pos.x = m.x - 20;
    pos.y = m.y - 20;
    if (ga->me.ev.type == sfEvtMouseButtonPressed) {
        if (m.x >= 1600 && m.y <= 200) {
            ga->jo.money -= ga->jo.prix_sb;
            ga->jo.pot_sb += 1;
            ga->jo.prix_sb += 10;
        }
    }
    sfSprite_setPosition(sprite, pos);
    sfRenderWindow_drawSprite(w, sprite, NULL);
}

void smove_pot_pv(sfRenderWindow* w, game *ga, sfSprite *sp)
{
    sfVector2i mouse;
    sfVector2f c = sfSprite_getPosition(sp);
    sfVector2f d = {c.x + 50, c.y + 50};
    static int count = 0;

    mouse.x = sfMouse_getPositionRenderWindow(w).x;
    mouse.y = sfMouse_getPositionRenderWindow(w).y;
    if (count == 1) {
        potpv_on_square_s(w, ga);
    }
    if (ga->me.ev.type == sfEvtMouseButtonPressed) {
        if ((mouse.x >= c.x && mouse.y >= c.y)
            && (mouse.x <= d.x && mouse.y <= d.y)
            && ga->jo.money >= ga->jo.prix_pv)
            count = 1;
        else
            count = 0;
    }
}

void smove_pot_sb(sfRenderWindow* w, game *ga, sfSprite *sp)
{
    sfVector2i mouse;
    sfVector2f c = sfSprite_getPosition(sp);
    sfVector2f d = {c.x + 50, c.y + 50};
    static int count = 0;

    mouse.x = sfMouse_getPositionRenderWindow(w).x;
    mouse.y = sfMouse_getPositionRenderWindow(w).y;
    if (count == 1) {
        potsb_on_square_s(w, ga);
    }
    if (ga->me.ev.type == sfEvtMouseButtonPressed) {
        if ((mouse.x >= c.x && mouse.y >= c.y)
            && (mouse.x <= d.x && mouse.y <= d.y)
            && ga->jo.money >= ga->jo.prix_sb)
            count = 1;
        else
            count = 0;
    }
}

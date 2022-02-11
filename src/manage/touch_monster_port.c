/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** touch monster port
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

void touch_monster1_port(game *ga)
{
    sfVector2f pos = sfSprite_getPosition(ga->jo.star_ball);
    sfVector2f b = {pos.x + 200, pos.y + 200};
    sfVector2f c = sfSprite_getPosition(ga->mo.s_port_monster1);
    sfVector2f d = {c.x + 55, c.y + 60};
    static int count = 0;

    if (((pos.x <= c.x && c.x <= b.x) && (pos.y <= c.y && c.y <= b.y))
        || ((pos.x <= d.x && d.x <= b.x) && (pos.y <= d.y && d.y <= b.y)))
        count++;
    if (count >= 400 * ga->jo.dmg_sb) {
        sfSprite_setPosition(ga->mo.s_port_monster1, (sfVector2f){-100, -100});
        count = 0;
        ga->ba.nb_xp = 80;
        ga->jo.money += 4;
    }
}

void touch_monster2_port(game *ga)
{
    sfVector2f pos = sfSprite_getPosition(ga->jo.star_ball);
    sfVector2f b = {pos.x + 200, pos.y + 200};
    sfVector2f c = sfSprite_getPosition(ga->mo.s_port_monster2);
    sfVector2f d = {c.x + 55, c.y + 60};
    static int count = 0;

    if (((pos.x <= c.x && c.x <= b.x) && (pos.y <= c.y && c.y <= b.y))
        || ((pos.x <= d.x && d.x <= b.x) && (pos.y <= d.y && d.y <= b.y)))
        count++;
    if (count >= 400 * ga->jo.dmg_sb) {
        sfSprite_setPosition(ga->mo.s_port_monster2, (sfVector2f){-100, 1100});
        count = 0;
        ga->ba.nb_xp = 80;
        ga->jo.money += 4;
    }
}

void touch_monster3_port(game *ga)
{
    sfVector2f pos = sfSprite_getPosition(ga->jo.star_ball);
    sfVector2f b = {pos.x + 200, pos.y + 200};
    sfVector2f c = sfSprite_getPosition(ga->mo.s_port_monster3);
    sfVector2f d = {c.x + 55, c.y + 60};
    static int count = 0;

    if (((pos.x <= c.x && c.x <= b.x) && (pos.y <= c.y && c.y <= b.y))
        || ((pos.x <= d.x && d.x <= b.x) && (pos.y <= d.y && d.y <= b.y)))
        count++;
    if (count >= 400 * ga->jo.dmg_sb) {
        sfSprite_setPosition(ga->mo.s_port_monster3, (sfVector2f){2000, -100});
        count = 0;
        ga->ba.nb_xp += 80;
        ga->jo.money += 4;
    }
}

void touch_monster4_port(game *ga)
{
    sfVector2f pos = sfSprite_getPosition(ga->jo.star_ball);
    sfVector2f b = {pos.x + 200, pos.y + 200};
    sfVector2f c = sfSprite_getPosition(ga->mo.s_port_monster4);
    sfVector2f d = {c.x + 55, c.y + 60};
    static int count = 0;

    if (((pos.x <= c.x && c.x <= b.x) && (pos.y <= c.y && c.y <= b.y))
        || ((pos.x <= d.x && d.x <= b.x) && (pos.y <= d.y && d.y <= b.y)))
        count++;
    if (count >= 400 * ga->jo.dmg_sb) {
        sfSprite_setPosition(ga->mo.s_port_monster4, (sfVector2f){2000, 1100});
        count = 0;
        ga->ba.nb_xp += 80;
        ga->jo.money += 4;
    }
}

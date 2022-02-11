/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** damage monsters
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

int monster_damages_volcan(game *ga, sfSprite *sp)
{
    sfVector2f jo_b = {ga->jo.pos.x + 35, ga->jo.pos.y + 35};
    sfVector2f c = sfSprite_getPosition(sp);
    sfVector2f d = {c.x + 55, c.y + 60};

    if (((((ga->jo.pos.x <= c.x && c.x <= jo_b.x &&
            ga->jo.pos.y <= c.y && c.y <= jo_b.y))))
        || (ga->jo.pos.x <= d.x && d.x <= jo_b.x
            && ga->jo.pos.y <= d.y && d.y <= jo_b.y))
        ga->fm.nb_hp_jo -= 0.1;
    if (ga->fm.nb_hp_jo <= 0)
        return (1);
    return (0);
}

int monster_damages_ville(game *ga, sfSprite *sp)
{
    sfVector2f jo_b = {ga->jo.pos.x + 35, ga->jo.pos.y + 35};
    sfVector2f c = sfSprite_getPosition(sp);
    sfVector2f d = {c.x + 55, c.y + 60};

    if (((((ga->jo.pos.x <= c.x && c.x <= jo_b.x &&
            ga->jo.pos.y <= c.y && c.y <= jo_b.y))))
        || (ga->jo.pos.x <= d.x && d.x <= jo_b.x
            && ga->jo.pos.y <= d.y && d.y <= jo_b.y)) {
        ga->fm.nb_hp_jo -= 0.2;
        gestion_hp_jo(ga);
    }
    if (ga->fm.nb_hp_jo <= 0)
        return (1);
    return (0);
}

int monster_damages_foret(game *ga, sfSprite *sp)
{
    sfVector2f jo_b = {ga->jo.pos.x + 35, ga->jo.pos.y + 35};
    sfVector2f c = sfSprite_getPosition(sp);
    sfVector2f d = {c.x + 55, c.y + 60};

    if (((((ga->jo.pos.x <= c.x && c.x <= jo_b.x &&
            ga->jo.pos.y <= c.y && c.y <= jo_b.y))))
        || (ga->jo.pos.x <= d.x && d.x <= jo_b.x
            && ga->jo.pos.y <= d.y && d.y <= jo_b.y)) {
        ga->fm.nb_hp_jo -= 0.25;
        gestion_hp_jo(ga);
    }
    if (ga->fm.nb_hp_jo <= 0)
        return (1);
    return (0);
}

int monster_damages_port(game *ga, sfSprite *sp)
{
    sfVector2f jo_b = {ga->jo.pos.x + 35, ga->jo.pos.y + 35};
    sfVector2f c = sfSprite_getPosition(sp);
    sfVector2f d = {c.x + 55, c.y + 60};

    if (((((ga->jo.pos.x <= c.x && c.x <= jo_b.x &&
            ga->jo.pos.y <= c.y && c.y <= jo_b.y))))
        || (ga->jo.pos.x <= d.x && d.x <= jo_b.x
            && ga->jo.pos.y <= d.y && d.y <= jo_b.y)) {
        ga->fm.nb_hp_jo -= 0.3;
        gestion_hp_jo(ga);
    }
    if (ga->fm.nb_hp_jo <= 0)
        return (1);
    return (0);
}

int monster_damages_neige(game *ga, sfSprite *sp)
{
    sfVector2f jo_b = {ga->jo.pos.x + 35, ga->jo.pos.y + 35};
    sfVector2f c = sfSprite_getPosition(sp);
    sfVector2f d = {c.x + 55, c.y + 60};

    if (((((ga->jo.pos.x <= c.x && c.x <= jo_b.x &&
            ga->jo.pos.y <= c.y && c.y <= jo_b.y))))
        || (ga->jo.pos.x <= d.x && d.x <= jo_b.x
            && ga->jo.pos.y <= d.y && d.y <= jo_b.y)) {
        ga->fm.nb_hp_jo -= 0.4;
        gestion_hp_jo(ga);
    }
    if (ga->fm.nb_hp_jo <= 0)
        return (1);
    return (0);
}

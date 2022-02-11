/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** gestion snow mobs
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

int monster_damages_neige(game *ga, sfSprite *sp)
{
    sfVector2f jo_b = {ga->jo.pos.x + 35, ga->jo.pos.y + 35};
    sfVector2f c = sfSprite_getPosition(sp);
    sfVector2f d = {c.x + 55, c.y + 60};

    if (((((ga->jo.pos.x <= c.x && c.x <= jo_b.x &&
            ga->jo.pos.y <= c.y && c.y <= jo_b.y))))
        || (ga->jo.pos.x <= d.x && d.x <= jo_b.x
            && ga->jo.pos.y <= d.y && d.y <= jo_b.y))
        ga->fm.nb_hp_jo -= 0.4;
    if (ga->fm.nb_hp_jo <= 0)
        return (1);
    return (0);
}

void gestion_monster_neige(sfRenderWindow* window, game *ga, sfMusic *music)
{
    int i = 0;
    sfVector2f pos = {ga->jo.pos.x - 85, ga->jo.pos.y - 85};

    if (sfKeyboard_isKeyPressed(sfKeySpace)) {
        sfSprite_setPosition(ga->jo.star_ball, pos);
        sfRenderWindow_drawSprite(window, ga->jo.star_ball, NULL);
        touch_monster1_snow(ga);
        touch_monster2_snow(ga);
        touch_monster3_snow(ga);
        touch_monster4_snow(ga);
    }
    i += monster_damages_neige(ga, ga->mo.s_snow_monster1);
    i += monster_damages_neige(ga, ga->mo.s_snow_monster2);
    i += monster_damages_neige(ga, ga->mo.s_snow_monster3);
    i += monster_damages_neige(ga, ga->mo.s_snow_monster4);
    if (i != 0) {
        sfMusic_stop(music);
        over(window, ga);
    }
}

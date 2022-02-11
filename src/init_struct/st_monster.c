/*
** EPITECH PROJECT, 2020
** st_monster.c
** File description:
** st_monster
*/

#include "my.h"

void st_monster(game *ga)
{
    ga->mo.s_snow_monster1 = create_snow_monster();
    ga->mo.s_snow_monster2 = create_snow_monster();
    ga->mo.s_snow_monster3 = create_snow_monster();
    ga->mo.s_snow_monster4 = create_snow_monster();
    ga->mo.s_volcano_monster1 = create_volcano_monster();
    ga->mo.s_volcano_monster2 = create_volcano_monster();
    ga->mo.s_volcano_monster3 = create_volcano_monster();
    ga->mo.s_volcano_monster4 = create_volcano_monster();
    ga->mo.s_city_monster1 = create_city_monster();
    ga->mo.s_city_monster2 = create_city_monster();
    ga->mo.s_city_monster3 = create_city_monster();
    ga->mo.s_city_monster4 = create_city_monster();
    ga->mo.s_forest_monster1 = create_forest_monster();
    ga->mo.s_forest_monster2 = create_forest_monster();
    ga->mo.s_forest_monster3 = create_forest_monster();
    ga->mo.s_forest_monster4 = create_forest_monster();
    ga->mo.s_port_monster1 = create_port_monster();
    ga->mo.s_port_monster2 = create_port_monster();
    ga->mo.s_port_monster3 = create_port_monster();
    ga->mo.s_port_monster4 = create_port_monster();
}

void init_pos_monster(game *ga)
{
    sfSprite_setPosition(ga->mo.s_port_monster1, (sfVector2f){523, 553});
    sfSprite_setPosition(ga->mo.s_port_monster2, (sfVector2f){856, 201});
    sfSprite_setPosition(ga->mo.s_port_monster3, (sfVector2f){1254, 351});
    sfSprite_setPosition(ga->mo.s_port_monster4, (sfVector2f){260, 895});
}

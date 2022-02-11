/*
** EPITECH PROJECT, 2020
** st_clock_monster.c
** File description:
** st_clock_monster
*/

#include "my.h"

void st_clock_monster(game *ga)
{
    ga->cl_monster.c_volcano_monster1 = create_c_clock();
    ga->cl_monster.c_volcano_monster2 = create_c_clock();
    ga->cl_monster.c_volcano_monster3 = create_c_clock();
    ga->cl_monster.c_volcano_monster4 = create_c_clock();
    ga->cl_monster.c_city_monster1 = create_c_clock();
    ga->cl_monster.c_city_monster2 = create_c_clock();
    ga->cl_monster.c_city_monster3 = create_c_clock();
    ga->cl_monster.c_city_monster4 = create_c_clock();
    ga->cl_monster.c_forest_monster1 = create_c_clock();
    ga->cl_monster.c_forest_monster2 = create_c_clock();
    ga->cl_monster.c_forest_monster3 = create_c_clock();
    ga->cl_monster.c_forest_monster4 = create_c_clock();
    ga->cl_monster.c_port_monster1 = create_c_clock();
    ga->cl_monster.c_port_monster2 = create_c_clock();
    ga->cl_monster.c_port_monster3 = create_c_clock();
    ga->cl_monster.c_port_monster4 = create_c_clock();
    ga->cl_monster.c_snow_monster1 = create_c_clock();
    ga->cl_monster.c_snow_monster2 = create_c_clock();
    ga->cl_monster.c_snow_monster3 = create_c_clock();
    ga->cl_monster.c_snow_monster4 = create_c_clock();
}

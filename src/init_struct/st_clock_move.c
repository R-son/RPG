/*
** EPITECH PROJECT, 2020
** st_clock_moove.c
** File description:
** st_clock_moove
*/

#include "my.h"

void st_clock_move(game *ga)
{
    ga->cl_m.c_ora_ora = create_c_clock();
    ga->cl_m.c_sf = create_c_clock();
    ga->cl_m.c_sb = create_c_clock();
    ga->cl_m.c_sp = create_c_clock();
    ga->cl_m.c_ta = create_c_clock();
}

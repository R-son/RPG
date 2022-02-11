/*
** EPITECH PROJECT, 2020
** gestion_moves_fm.c
** File description:
** gestion_moves_fm
*/

#include "my.h"

void gestion_moves_fm(game *ga)
{
    switch (ga->fm.atk_nb) {
    case 0:
        move_turning_around(ga);
        break;
    case 1:
        atk_ora_ora(ga);
        break;
    case 2:
        atk_star_breaker(ga);
        break;
    case 3:
        atk_star_finger(ga);
        break;
    case 4:
        atk_star_platinium(ga);
        break;
    default:
        break;
    }
}

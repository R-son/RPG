/*
** EPITECH PROJECT, 2020
** move_snow_monster.c
** File description:
** move_snow_monster
*/

#include "my.h"

void move_all_monster(game *ga)
{
    move_volcano_monster1(ga, 1, 20);
    move_volcano_monster2(ga, 1, 19);
    move_volcano_monster3(ga, 1, 18);
    move_volcano_monster4(ga, 1, 17);
    move_city_monster1(ga, 2, 20);
    move_city_monster2(ga, 2, 19);
    move_city_monster3(ga, 2, 18);
    move_city_monster4(ga, 2, 17);
    move_forest_monster1(ga, 3, 20);
    move_forest_monster2(ga, 3, 19);
    move_forest_monster3(ga, 3, 18);
    move_forest_monster4(ga, 3, 17);
    move_port_monster1(ga, 4, 20);
    move_port_monster2(ga, 4, 19);
    move_port_monster3(ga, 4, 18);
    move_port_monster4(ga, 4, 17);
    move_snow_monster1(ga, 5, 20);
    move_snow_monster2(ga, 5, 19);
    move_snow_monster3(ga, 5, 18);
    move_snow_monster4(ga, 5, 17);
}

void move_direction(sfSprite *s_monster, int nb_direction, int speed)
{
    switch (nb_direction) {
    case BOTTOM:
        move_bottom(s_monster, speed);
        break;
    case LEFT:
        move_left(s_monster, speed);
        break;
    case RIGHT:
        move_right(s_monster, speed);
        break;
    case TOP:
        move_top(s_monster, speed);
        break;
    default :
        break;
    }
}

int next_nb_direction(int nb_direction)
{
    int old_direction = nb_direction;

    nb_direction = rand() % 4;
    if (nb_direction == old_direction
        || (old_direction == TOP && nb_direction == BOTTOM)
        || (old_direction == BOTTOM && nb_direction == TOP)
        || (old_direction == LEFT && nb_direction == RIGHT)
        || (old_direction == RIGHT && nb_direction == LEFT)) {
        if (nb_direction == TOP || nb_direction == BOTTOM) {
            nb_direction = rand() % 2;
            nb_direction = (nb_direction == 1) ? LEFT : RIGHT;
        } else {
            nb_direction = rand() % 2;
            nb_direction = (nb_direction == 1) ? TOP : BOTTOM;
        }
    }
    return (nb_direction);
}

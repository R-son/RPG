/*
** EPITECH PROJECT, 2020
** move_volcano_monster.c
** File description:
** move_volcano_monster.c
*/

#include "my.h"

void move_volcano_monster1(game *ga, int speed, int max_time)
{
    static int nb_dir = 0;
    static int nb_time = 0;
    static int change_direction = 0;
    static int xrect = 0;

    sfSprite_setTextureRect(ga->mo.s_volcano_monster1,
        (sfIntRect){xrect, nb_dir * 60, 55, 60});
    if (sfTime_asSeconds(
        sfClock_getElapsedTime(ga->cl_monster.c_volcano_monster1)) > 0.1) {
        sfClock_restart(ga->cl_monster.c_volcano_monster1);
        nb_time++;
        xrect += 55;
        xrect = (xrect > 110) ? 0 : xrect;
    }
    if (nb_time >= change_direction) {
        nb_dir = next_nb_direction(nb_dir);
        nb_time = 0;
        change_direction = rand() % max_time;
    }
    move_direction(ga->mo.s_volcano_monster1, nb_dir, speed);
    nb_dir = verif_max_size_volcano(ga->mo.s_volcano_monster1, nb_dir);
}

void move_volcano_monster2(game *ga, int speed, int max_time)
{
    static int nb_dir = 0;
    static int nb_time = 0;
    static int change_direction = 0;
    static int xrect = 0;

    sfSprite_setTextureRect(ga->mo.s_volcano_monster2,
        (sfIntRect){xrect, nb_dir * 60, 55, 60});
    if (sfTime_asSeconds(
        sfClock_getElapsedTime(ga->cl_monster.c_volcano_monster2)) > 0.1) {
        sfClock_restart(ga->cl_monster.c_volcano_monster2);
        nb_time++;
        xrect += 55;
        xrect = (xrect > 110) ? 0 : xrect;
    }
    if (nb_time >= change_direction) {
        nb_dir = next_nb_direction(nb_dir);
        nb_time = 0;
        change_direction = rand() % max_time;
    }
    move_direction(ga->mo.s_volcano_monster2, nb_dir, speed);
    nb_dir = verif_max_size_volcano(ga->mo.s_volcano_monster2, nb_dir);
}

void move_volcano_monster3(game *ga, int speed, int max_time)
{
    static int nb_dir = 0;
    static int nb_time = 0;
    static int change_direction = 0;
    static int xrect = 0;

    sfSprite_setTextureRect(ga->mo.s_volcano_monster3,
        (sfIntRect){xrect, nb_dir * 60, 55, 60});
    if (sfTime_asSeconds(
        sfClock_getElapsedTime(ga->cl_monster.c_volcano_monster3)) > 0.1) {
        sfClock_restart(ga->cl_monster.c_volcano_monster3);
        nb_time++;
        xrect += 55;
        xrect = (xrect > 110) ? 0 : xrect;
    }
    if (nb_time >= change_direction) {
        nb_dir = next_nb_direction(nb_dir);
        nb_time = 0;
        change_direction = rand() % max_time;
    }
    move_direction(ga->mo.s_volcano_monster3, nb_dir, speed);
    nb_dir = verif_max_size_volcano(ga->mo.s_volcano_monster3, nb_dir);
}

void move_volcano_monster4(game *ga, int speed, int max_time)
{
    static int nb_dir = 0;
    static int nb_time = 0;
    static int change_direction = 0;
    static int xrect = 0;

    sfSprite_setTextureRect(ga->mo.s_volcano_monster4,
                            (sfIntRect){xrect, nb_dir * 60, 55, 60});
    if (sfTime_asSeconds(
        sfClock_getElapsedTime(ga->cl_monster.c_volcano_monster4)) > 0.1) {
        sfClock_restart(ga->cl_monster.c_volcano_monster4);
        nb_time++;
        xrect += 55;
        xrect = (xrect > 110) ? 0 : xrect;
    }
    if (nb_time >= change_direction) {
        nb_dir = next_nb_direction(nb_dir);
        nb_time = 0;
        change_direction = rand() % max_time;
    }
    move_direction(ga->mo.s_volcano_monster4, nb_dir, speed);
    nb_dir = verif_max_size_volcano(ga->mo.s_volcano_monster4, nb_dir);
}

/*
** EPITECH PROJECT, 2020
** atk_jotaro.c
** File description:
** atk
*/

#include "my.h"

void atk_ora_ora(game *ga)
{
    static int or = 0;

    ga->fm.atk_on = 1;
    sfSprite_setTextureRect(ga->jo.s_ora_ora,
                            (sfIntRect){or, 0, 142, 144});
    if (sfTime_asSeconds(sfClock_getElapsedTime(ga->cl_m.c_ora_ora)) > 0.1) {
        sfClock_restart(ga->cl_m.c_ora_ora);
        or = or + 160;
    }
    if (or > 4480) {
        or = 0;
        ga->fm.atk_nb = 0;
        ga->fm.boss_turn = 1;
    }
}

void atk_star_platinium(game *ga)
{
    static int sp = 0;

    ga->fm.atk_on = 1;
    sfSprite_setTextureRect(ga->jo.s_star_platinium,
                            (sfIntRect){sp, 0, 170, 130});
    if (sfTime_asSeconds(sfClock_getElapsedTime(ga->cl_m.c_sp)) > 0.1) {
        sfClock_restart(ga->cl_m.c_sp);
        sp = sp + 170;
    }
    if (sp > 1360) {
        sp = 0;
        ga->fm.atk_nb = 0;
        ga->fm.boss_turn = 1;
    }
}

void atk_star_finger(game *ga)
{
    static int sf = 0;

    ga->fm.atk_on = 1;
    sfSprite_setTextureRect(ga->jo.s_star_finger,
                            (sfIntRect){sf, 0, 222, 130});
    if (sfTime_asSeconds(sfClock_getElapsedTime(ga->cl_m.c_sf)) > 0.1) {
        sfClock_restart(ga->cl_m.c_sf);
        sf = sf + 222;
    }
    if (sf > 3996) {
        sf = 0;
        ga->fm.atk_nb = 0;
        ga->fm.boss_turn = 1;
    }
}

void atk_star_breaker(game *ga)
{
    static int sb = 0;

    ga->fm.atk_on = 1;
    sfSprite_setTextureRect(ga->jo.s_star_breaker,
                            (sfIntRect){sb, 0, 225, 144});
    if (sfTime_asSeconds(sfClock_getElapsedTime(ga->cl_m.c_sb)) > 0.1) {
        sfClock_restart(ga->cl_m.c_sb);
        sb = sb + 225;
    }
    if (sb > 4950) {
        sb = 0;
        ga->fm.atk_nb = 0;
        ga->fm.boss_turn = 1;
    }
}

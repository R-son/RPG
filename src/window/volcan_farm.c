/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** farm zone volcan
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

void volcan_display(sfRenderWindow* w, game *ga)
{
    int i = 0;

    display_window(w, ga);
    sfRenderWindow_drawSprite(w, ga->jo.s_jotaro, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_volcano_monster1, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_volcano_monster2, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_volcano_monster3, NULL);
    sfRenderWindow_drawSprite(w, ga->mo.s_volcano_monster4, NULL);
    display_xp(w, ga);
    (ga->jo.pos.x <= 1900 ? i++ : (ga->jo.pos.x = 1900));
    (ga->jo.pos.x >= 530 ? i++ : (ga->jo.pos.x = 530));
    (ga->jo.pos.y <= 980 ? i++ : (ga->jo.pos.y = 980));
    (ga->jo.pos.y >= 105 ? i++ : (ga->jo.pos.y = 105));
    if (i == 4 && (volcan_farm_obstacle(ga) == 1))
        move_jotaro(ga);
    while (sfRenderWindow_pollEvent(w, &ga->me.ev)) {
        if (ga->me.ev.type == sfEvtClosed)
            sfRenderWindow_close(w);
    }
}

void volcan_farm_redirection(sfRenderWindow* window, game *ga, sfMusic *music)
{
    if ((ga->jo.pos.y >= 980 && (ga->jo.pos.x > 750 && ga->jo.pos.x < 995))
        && sfKeyboard_isKeyPressed(sfKeyDown)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 510;
        ga->jo.pos.y = 10;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        middle(window, ga);
    }
    if ((ga->jo.pos.x >= 1890 && (ga->jo.pos.y > 105 && ga->jo.pos.y < 275))
        && sfKeyboard_isKeyPressed(sfKeyRight)) {
        sfMusic_stop(music);
        ga->jo.pos.x = 10;
        ga->jo.pos.y = 935;
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
        volcan_path(window, ga);
    }
}

void volcan_farm(sfRenderWindow* window, game *ga)
{
    sfMusic *music = volcan_1();
    int p = 0;

    ga->me.spriteback = vo_farm_background();
    while (sfRenderWindow_isOpen(window)) {
        volcan_display(window, ga);
        gestion_monster_volcan(window, ga, music);
        gestion_xp(ga);
        if (p == 0) {
            volcan_farm_redirection(window, ga, music);
            move_all_monster(ga);
        }
        p = window_to_pause(window, ga, music);
    }
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
}

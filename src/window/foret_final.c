/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** final zone port
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

void foret_to_fight(sfRenderWindow* w, game *ga, sfMusic *music)
{
    if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
        sfMusic_stop(music);
        music = foret_music();
        ga->fm.ball_dmg = create_sha();
        ga->me.spriteback_zw = fo_fight_zw();
        ga->me.back = fo_fight_background();
        ga->me.spriteback = fo_fight_background();
        ga->jo.dmg_jo = 40;
        my_rpg(w, ga, DMG_BOSS3, music);
    }
}

int foret_final_obstacle(sfRenderWindow *w, game *ga, sfMusic *m, int i)
{
    if (ga->jo.pos.y >= 600) {
        ga->jo.jo_rect.left += 32;
        if (ga->jo.jo_rect.left >= 96)
            ga->jo.jo_rect.left = 0;
        ga->jo.pos.y -= 5;
        sfSprite_setTextureRect(ga->jo.s_jotaro, ga->jo.jo_rect);
        sfSprite_setPosition(ga->jo.s_jotaro, ga->jo.pos);
    } else {
        if (i == 0) {
            sfMusic_play(m);
            sfMusic_setLoop(m, sfTrue);
            i = 1;
        }
        sfRenderWindow_drawSprite(w, ga->di.di_sprite, NULL);
        display_text(w);
        foret_to_fight(w, ga, m);
    }
    return (i);
}

int foret_final_display(sfRenderWindow* w, game *ga, sfMusic *m, int i)
{
    display_window(w, ga);
    sfRenderWindow_drawSprite(w, ga->jo.s_jotaro, NULL);
    i = foret_final_obstacle(w, ga, m, i);
    return (i);
}

void close_window(sfRenderWindow *window, sfEvent ev)
{
    if (ev.type == sfEvtClosed)
        sfRenderWindow_close(window);
}

void foret_final(sfRenderWindow *window, game *ga)
{
    static int i = 0;
    sfEvent ev;
    sfMusic *music = kira_music();

    ga->me.spriteback = fo_final_background();
    ga->di.di_sprite = create_dialog_foret(ga);
    while (sfRenderWindow_isOpen(window)) {
        i = foret_final_display(window, ga, music, i);
        event_dialog(ga);
        while (sfRenderWindow_pollEvent(window, &ev))
            close_window(window, ev);
    }
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
}

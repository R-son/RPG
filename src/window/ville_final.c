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

void ville_to_fight(sfRenderWindow* w, game *ga, sfMusic *music)
{
    if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
        sfMusic_stop(music);
        music = ville_music();
        ga->fm.ball_dmg = create_knife();
        ga->me.spriteback_zw = vi_fight_zw();
        ga->me.back = vi_fight_background();
        ga->me.spriteback = vi_fight_background();
        ga->jo.dmg_jo = 30;
        my_rpg(w, ga, DMG_BOSS2, music);
    }
}

int ville_final_display(sfRenderWindow* w, game *ga, sfMusic *m, int i)
{
    display_window(w, ga);
    sfRenderWindow_drawSprite(w, ga->jo.s_jotaro, NULL);
    if (ga->jo.pos.y >= 380) {
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
        ville_to_fight(w, ga, m);
    }
    return (i);
}

void ville_final(sfRenderWindow* window, game *ga)
{
    static int i = 0;
    sfEvent ev;
    sfMusic *music = dio_music();

    ga->me.spriteback = vi_final_background();
    ga->di.di_sprite = create_dialog_ville(ga);
    while (sfRenderWindow_isOpen(window)) {
        i = ville_final_display(window, ga, music, i);
        event_dialog(ga);
        while (sfRenderWindow_pollEvent(window, &ev))
            close_window(window, ev);
    }
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
}

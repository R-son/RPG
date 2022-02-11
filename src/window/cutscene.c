/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** cutscene Joseph Ange entrance
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "struct_game.h"
#include "my.h"

sfSprite *cutscene_background(void)
{
    sfTexture* txt;
    sfSprite* background;
    char *filepath = "image/maps_rpg/spawn_and_middle/spawn.jpg";

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, txt, sfTrue);
    return (background);
}

sfIntRect ja_clock(sfClock *clock_a, game *ga)
{
    sfTime time_a = sfClock_getElapsedTime(clock_a);
    float seconds_a = time_a.microseconds / 1000000.0;

    if (seconds_a > 0.08) {
        ga->ja.ja_rect.left += 32;
        if (ga->ja.ja_rect.left >= 288)
            ga->ja.ja_rect.left = 0;
        sfClock_restart(clock_a);
    }
    sfSprite_setTextureRect(ga->ja.s_josephange, ga->ja.ja_rect);
    return (ga->ja.ja_rect);
}

void init_cutscene(game *ga)
{
    ga->me.spriteback = cutscene_background();
    ga->jo.s_jotaro = create_jotaro(ga);
    ga->ja.s_josephange = create_ja_back();
    ga->di.di_sprite = create_dialog(ga);
    ga->jo.pot_pv = 1;
    ga->jo.pot_sb = 1;
    ga->jo.prix_pv = 5;
    ga->jo.prix_sb = 5;
    ga->jo.win_vo = 0;
    ga->jo.win_vi = 0;
    ga->jo.win_fo = 0;
    ga->jo.win_po = 0;
    ga->jo.money = 10;
    ga->jo.dmg_sb = 1;
    ga->jo.lvl_sb = 1;
}

void display_cutscene(sfRenderWindow* w, game *ga, int count, sfMusic *music)
{
    display_window(w, ga);
    sfRenderWindow_drawSprite(w, ga->jo.s_jotaro, NULL);
    sfRenderWindow_drawSprite(w, ga->ja.s_josephange, NULL);
    if (count == 1) {
        ga->ja.ja_rect = ja_clock(ga->ja.clock_ja, ga);
        ga->ja.ja_pos.y += 2;
        sfSprite_setPosition(ga->ja.s_josephange, ga->ja.ja_pos);
        sfRenderWindow_drawSprite(w, ga->ja.s_josephange, NULL);
    } else {
        sfRenderWindow_drawSprite(w, ga->di.di_sprite, NULL);
        display_text(w);
    }
    if (ga->ja.ja_pos.y >= 1090 && ga->ja.ja_pos.x == 965) {
        sfMusic_stop(music);
        spawn(w, ga);
    }
}

void cutscene(sfRenderWindow* window, sfEvent ev, game *ga)
{
    josephange *ja = malloc(sizeof(*ja));
    jotaro *jo = malloc(sizeof(*jo));
    dialog *di = malloc(sizeof(*di));
    static int count = 0;
    sfMusic *music = cutscene_music();

    ga->ja.clock_ja = sfClock_create();
    init_cutscene(ga);
    while (sfRenderWindow_isOpen(window)) {
        display_cutscene(window, ga, count, music);
        count = cutscene_loop(window, ev, ga);
    }
    destroy_cutscne(window, ga, music);
}

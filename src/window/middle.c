/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** middle window
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

sfSprite *middle_background(void)
{
    sfTexture* txt;
    sfSprite* background;
    char *filepath = "image/maps_rpg/spawn_and_middle/middle_1.jpg";

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, txt, sfTrue);
    return (background);
}

int middle_obstacle(game *ga)
{
    sfVector2f a = {720, 510};
    sfVector2f b = {1110, 790};
    sfVector2f c = {-5, -5};
    sfVector2f d = {365, 500};
    sfVector2f e = {-5, 550};
    sfVector2f f = {345, 850};
    sfVector2f g = {630, -5};
    sfVector2f h = {1030, 380};
    sfVector2f i = {1125, -5};
    sfVector2f j = {1370, 355};
    sfVector2f k = {1020, 620};
    sfVector2f l = {1185, 740};

    if ((obstacle_gestion(ga, a, b) == 1) && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1)
        && (obstacle_gestion(ga, g, h) == 1)
        && (obstacle_gestion(ga, i, j) == 1)
        && (obstacle_gestion(ga, k, l) == 1))
        return (1);
    return (0);
}

void shop_event(sfRenderWindow* window, game *ga, sfMusic *music)
{
    if (ga->jo.pos.x >= 1020 && ga->jo.pos.x <= 1185 && ga->jo.pos.y == 745) {
        sfRenderWindow_drawSprite(window, ga->di.di_sprite, NULL);
        display_shop(window);
        if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
            sfMusic_stop(music);
            shop(window, ga);
        }
    }
}

void middle_display(sfRenderWindow* w, game *ga, sfSprite *home, sfMusic *music)
{
    int i = 0;

    ga->di.di_sprite = create_dialog_shop(ga);
    sfRenderWindow_drawSprite(w, ga->jo.s_jotaro, NULL);
    sfRenderWindow_drawSprite(w, home, NULL);
    display_xp(w, ga);
    (ga->jo.pos.x <= 1900 ? i++ : (ga->jo.pos.x = 1900));
    (ga->jo.pos.x >= 10 ? i++ : (ga->jo.pos.x = 10));
    (ga->jo.pos.y <= 840 ? i++ : (ga->jo.pos.y = 840));
    (ga->jo.pos.y >= 10 ? i++ : (ga->jo.pos.y = 10));
    if (i == 4 && (middle_obstacle(ga) == 1))
        move_jotaro(ga);
    while (sfRenderWindow_pollEvent(w, &ga->me.ev))
        close_window(w, ga->me.ev);
    shop_event(w, ga, music);
}

void middle(sfRenderWindow* window, game *ga)
{
    sfMusic *music = middle_music();
    sfSprite *house = create_house();
    sfSprite *shop = create_shop();
    int p = 0;

    ga->me.spriteback = middle_background();
    while (sfRenderWindow_isOpen(window)) {
        display_window(window, ga);
        sfRenderWindow_drawSprite(window, shop, NULL);
        middle_display(window, ga, house, music);
        if (p == 0) {
            middle_redirection(window, ga, music);
            move_all_monster(ga);
        }
        p = window_to_pause(window, ga, music);
    }
    sfMusic_destroy(music);
    sfSprite_destroy(shop);
    sfSprite_destroy(house);
    sfRenderWindow_close(window);
}

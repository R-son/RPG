/*
** EPITECH PROJECT, 2020
** menu
** File description:
** menu gestion
*/

#include "my.h"

sfSprite *play_button(void)
{
    sfTexture* play_texture;
    sfSprite* play;
    sfIntRect rect = {0, 0, 670, 185};

    play_texture = sfTexture_createFromFile("image/play.png", NULL);
    if (!play_texture)
        return (NULL);
    play = sfSprite_create();
    sfSprite_setTexture(play, play_texture, sfTrue);
    sfSprite_setTextureRect(play, rect);
    return (play);
}

sfSprite *quit_button(void)
{
    sfTexture* quit_texture;
    sfSprite* quit;
    sfIntRect rect = {0, 0, 670, 185};

    quit_texture = sfTexture_createFromFile("image/exit.png", NULL);
    if (!quit_texture)
        return (NULL);
    quit = sfSprite_create();
    sfSprite_setTexture(quit, quit_texture, sfTrue);
    sfSprite_setTextureRect(quit, rect);
    return (quit);
}

sfSprite *menu_background(void)
{
    sfTexture* texture;
    sfSprite* menu_background;

    texture = sfTexture_createFromFile("image/menu.jpg", NULL);
    if (!texture)
        return (NULL);
    menu_background = sfSprite_create();
    sfSprite_setTexture(menu_background, texture, sfTrue);
    return (menu_background);
}

void event_close(sfRenderWindow* window, sfEvent ev, game *ga)
{
    while (sfRenderWindow_pollEvent(window, &ev)) {
        if (ev.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeySpace))
            sfRenderWindow_close(window);
        event_play(window, ev, ga);
        event_quit(window, ev, ga->me.sprite_two);
    }
}

void launch_menu(sfRenderWindow* window)
{
    game *ga = malloc(sizeof(*ga));
    sfEvent ev;

    srand(time(0));
    st_menu(ga);
    st_clock_move(ga);
    st_clock_monster(ga);
    st_monster(ga);
    init_pos_monster(ga);
    st_jotaro_atk(ga);
    st_fight_menu(ga);
    st_bar(ga);
    st_effect(ga);
    while (sfRenderWindow_isOpen(window)) {
        display_window(window, ga);
        htp_redirection(window, ga);
        button_loop(window, ga);
        event_close(window, ev, ga);
    }
    destroy_menu(window, ga);
}

/*
** EPITECH PROJECT, 2020
** st_menu.c
** File description:
** st_menu
*/

#include "my.h"

void st_menu(game *ga)
{
    ga->me.spriteback = menu_background();
    ga->me.sprite_one = play_button();
    ga->me.sprite_two = quit_button();
    ga->me.menu_music = menu_music();
    ga->me.htp_but = create_htp();
}

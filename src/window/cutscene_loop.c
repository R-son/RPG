/*
** EPITECH PROJECT, 2020
** cutscene loop
** File description:
** Execute cutscenes' loop
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "struct_game.h"
#include "my.h"

int cutscene_loop(sfRenderWindow* window, sfEvent ev, game *ga)
{
    static int count = 0;

    while (sfRenderWindow_pollEvent(window, &ev)) {
        if (ev.type == sfEvtClosed)
            sfRenderWindow_close(window);
        event_dialog(ga);
        if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
            ga->ja.s_josephange = create_ja_front(ga);
            count = 1;
        }
    }
    return count;
}

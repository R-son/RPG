/*
** EPITECH PROJECT, 2020
** how
** File description:
** how
*/

#include "my.h"

sfSprite *how_back(void)
{
    sfTexture *textback;
    sfSprite *spriteback;

    textback = sfTexture_createFromFile("image/how.jpg", NULL);
    if (!textback)
        return (NULL);
    spriteback = sfSprite_create();
    sfSprite_setTexture(spriteback, textback, sfTrue);
    return (spriteback);
}

void how(sfRenderWindow* win)
{
    sfEvent ev;
    sfSprite *back = how_back();
    sfMusic *music = how_music();

    while (sfRenderWindow_isOpen(win)) {
        sfRenderWindow_display(win);
        sfRenderWindow_drawSprite(win, back, NULL);
        while (sfRenderWindow_pollEvent(win, &ev)) {
            if (ev.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape)
                || sfKeyboard_isKeyPressed(sfKeySpace)
                || sfKeyboard_isKeyPressed(sfKeyEnter)) {
                sfMusic_stop(music);
                sfMusic_destroy(music);
                launch_menu(win);
            }
        }
    }
}

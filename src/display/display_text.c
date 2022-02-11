/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** display text continue in dialogs
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

void display_text(sfRenderWindow* window)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {1480, 960};

    font = sfFont_createFromFile("boldfont/DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, "Press Enter to continue");
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
}

void display_shop(sfRenderWindow* window)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {1360, 960};

    font = sfFont_createFromFile("boldfont/DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, "Press Enter to enter in the shop");
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
}

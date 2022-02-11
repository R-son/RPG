/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create shop txt
*/

#include "my.h"

void text_price_red(sfRenderWindow* window, game *ga)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {570, 925};
    char *str = NULL;

    str = my_inttostr(ga->jo.prix_pv, str);
    font = sfFont_createFromFile("boldfont/DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, str);
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
}

void text_price_blue(sfRenderWindow* window, game *ga)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {1385, 915};
    char *str = NULL;

    str = my_inttostr(ga->jo.prix_sb, str);
    font = sfFont_createFromFile("boldfont/DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, str);
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
}

void text_money(sfRenderWindow* window, game *ga)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {230, 30};
    char *str = NULL;

    str = my_inttostr(ga->jo.money, str);
    font = sfFont_createFromFile("boldfont/DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, str);
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
}

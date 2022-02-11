/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create inventory text
*/

#include "my.h"

void text_pv(sfRenderWindow* window, game *ga)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {1500, 390};
    char *str = NULL;

    str = intslashintstr(ga->fm.nb_hp_jo, ga->fm.nb_maxhp_jo, str);
    font = sfFont_createFromFile("boldfont/DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, str);
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
    sfText_destroy(text);
}

void text_lvl_sb(sfRenderWindow* window, game *ga)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {1590, 555};
    char *str = NULL;

    str = my_inttostr(ga->jo.lvl_sb , str);
    font = sfFont_createFromFile("boldfont/DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, str);
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
    sfText_destroy(text);
}

void text_pot_pv(sfRenderWindow* window, game *ga)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {945, 525};
    char *str = NULL;

    str = my_inttostr(ga->jo.pot_pv, str);
    font = sfFont_createFromFile("boldfont/DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, str);
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
    sfText_destroy(text);
}

void text_pot_sb(sfRenderWindow* window, game *ga)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {1605, 525};
    char *str = NULL;

    str = my_inttostr(ga->jo.pot_sb, str);
    font = sfFont_createFromFile("boldfont/DejaVuSans-Bold.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, str);
    sfText_setPosition(text, pos);
    sfRenderWindow_drawText(window, text, NULL);
    sfText_destroy(text);
}

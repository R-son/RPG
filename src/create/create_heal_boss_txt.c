/*
** EPITECH PROJECT, 2020
** create_heal_boss_txt.c
** File description:
** create heal_boss txt
*/

#include "my.h"

sfText *create_heal_boss_txt(void)
{
    sfFont *font_heal_boss_txt;
    sfText *text_heal_boss_txt;
    sfColor color_heal_boss_txt;

    font_heal_boss_txt = sfFont_createFromFile("boldfont/gamebold.ttf");
    text_heal_boss_txt = sfText_create();
    sfText_setString(text_heal_boss_txt, "959/959");
    sfText_setFont(text_heal_boss_txt, font_heal_boss_txt);
    sfText_setCharacterSize(text_heal_boss_txt, 15);
    color_heal_boss_txt = sfColor_fromRGB(255, 255, 255);
    sfText_setPosition(text_heal_boss_txt, (sfVector2f){920, 40});
    sfText_setColor(text_heal_boss_txt, color_heal_boss_txt);
    return (text_heal_boss_txt);
}

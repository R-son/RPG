/*
** EPITECH PROJECT, 2020
** create_xp_txt.c
** File description:
** create xp txt
*/

#include "my.h"

sfText *create_xp_txt(void)
{
    sfFont *font_xp_txt;
    sfText *text_xp_txt;
    sfColor color_xp_txt;

    font_xp_txt = sfFont_createFromFile("boldfont/gamebold.ttf");
    text_xp_txt = sfText_create();
    sfText_setString(text_xp_txt, "0/382");
    sfText_setFont(text_xp_txt, font_xp_txt);
    sfText_setCharacterSize(text_xp_txt, 10);
    color_xp_txt = sfColor_fromRGB(255, 255, 255);
    sfText_setPosition(text_xp_txt, (sfVector2f){250, 970});
    sfText_setColor(text_xp_txt, color_xp_txt);
    return (text_xp_txt);
}

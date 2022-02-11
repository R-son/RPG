/*
** EPITECH PROJECT, 2020
** create_niv_txt.c
** File description:
** create niv txt
*/

#include "my.h"

sfText *create_niv_txt(void)
{
    sfFont *font_niv_txt;
    sfText *text_niv_txt;
    sfColor color_niv_txt;

    font_niv_txt = sfFont_createFromFile("boldfont/gamebold.ttf");
    text_niv_txt = sfText_create();
    sfText_setString(text_niv_txt, "1");
    sfText_setFont(text_niv_txt, font_niv_txt);
    sfText_setCharacterSize(text_niv_txt, 10);
    color_niv_txt = sfColor_fromRGB(255, 255, 255);
    sfText_setPosition(text_niv_txt, (sfVector2f){275, 950});
    sfText_setColor(text_niv_txt, color_niv_txt);
    return (text_niv_txt);
}

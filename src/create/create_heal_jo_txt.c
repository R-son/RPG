/*
** EPITECH PROJECT, 2020
** create_heal_jo_txt.c
** File description:
** create heal_jo txt
*/

#include "my.h"

sfText *create_heal_jo_txt(void)
{
    sfFont *font_heal_jo_txt;
    sfText *text_heal_jo_txt;
    sfColor color_heal_jo_txt;

    font_heal_jo_txt = sfFont_createFromFile("boldfont/gamebold.ttf");
    text_heal_jo_txt = sfText_create();
    sfText_setString(text_heal_jo_txt, "382/382");
    sfText_setFont(text_heal_jo_txt, font_heal_jo_txt);
    sfText_setCharacterSize(text_heal_jo_txt, 15);
    color_heal_jo_txt = sfColor_fromRGB(255, 255, 255);
    sfText_setPosition(text_heal_jo_txt, (sfVector2f){1550, 955});
    sfText_setColor(text_heal_jo_txt, color_heal_jo_txt);
    return (text_heal_jo_txt);
}

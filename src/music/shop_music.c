/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** shop music
*/

#include "my.h"

sfMusic *shop_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/shop.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

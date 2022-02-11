/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** middle music
*/

#include "my.h"

sfMusic *middle_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/middle.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

/*
** EPITECH PROJECT, 2020
** fight_ville
** File description:
** fight ville music
*/

#include "my.h"

sfMusic *ville_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/theme_dio.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

/*
** EPITECH PROJECT, 2020
** fight_port
** File description:
** fight port music
*/

#include "my.h"

sfMusic *port_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/theme_diavolo.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

/*
** EPITECH PROJECT, 2020
** port
** File description:
** port musique
*/

#include "my.h"

sfMusic *port_1(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/port_1.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

sfMusic *port_2(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/port_2.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

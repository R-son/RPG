/*
** EPITECH PROJECT, 2020
** neige
** File description:
** neige musique
*/

#include "my.h"

sfMusic *neige_1(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/neige_1.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

sfMusic *neige_2(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/neige_2.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

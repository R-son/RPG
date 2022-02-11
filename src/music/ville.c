/*
** EPITECH PROJECT, 2020
** ville
** File description:
** music ville
*/

#include "my.h"

sfMusic *ville_1(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/ville_1.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

sfMusic *ville_2(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/ville_2.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

/*
** EPITECH PROJECT, 2020
** foret
** File description:
** music
*/

#include "my.h"

sfMusic *foret_1(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/foret_1.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

sfMusic *foret_2(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/foret_2.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

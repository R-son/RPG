/*
** EPITECH PROJECT, 2020
** volcan
** File description:
** volcan musique
*/

#include "my.h"

sfMusic *volcan_1(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/volcan_1.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

sfMusic *volcan_2(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/volcan_2.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

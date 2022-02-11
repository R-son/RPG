/*
** EPITECH PROJECT, 2020
** end_music
** File description:
** end music
*/

#include "my.h"

sfMusic *end_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/end.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

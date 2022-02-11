/*
** EPITECH PROJECT, 2020
** how_music
** File description:
** how music
*/

#include "my.h"

sfMusic *how_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/how.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

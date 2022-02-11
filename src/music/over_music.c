/*
** EPITECH PROJECT, 2020
** over_music
** File description:
** over music
*/

#include "my.h"

sfMusic *over_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/game_over.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

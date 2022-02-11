/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** spawn music
*/

#include "my.h"

sfMusic *spawn_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/spawn.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

/*
** EPITECH PROJECT, 2020
** fight_neige
** File description:
** fight neige music
*/

#include "my.h"

sfMusic *neige_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/theme_josephange.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

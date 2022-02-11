/*
** EPITECH PROJECT, 2020
** fight_foret
** File description:
** music fight foret
*/

#include "my.h"

sfMusic *foret_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/theme_kira.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

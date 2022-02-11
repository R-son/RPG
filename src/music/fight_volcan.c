/*
** EPITECH PROJECT, 2020
** fight_volcan
** File description:
** fight volcan music
*/

#include "my.h"

sfMusic *volcan_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/theme_kars.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

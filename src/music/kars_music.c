/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create cutscene music
*/

#include "my.h"

sfMusic *kars_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/kars_music.ogg");
    if (!music)
        return (NULL);
    return (music);
}

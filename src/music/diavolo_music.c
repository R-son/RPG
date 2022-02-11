/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create cutscene music
*/

#include "my.h"

sfMusic *diavolo_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/diavolo_music.ogg");
    if (!music)
        return (NULL);
    return (music);
}

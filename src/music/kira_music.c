/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create cutscene music
*/

#include "my.h"

sfMusic *kira_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/kira_music.ogg");
    if (!music)
        return (NULL);
    return (music);
}

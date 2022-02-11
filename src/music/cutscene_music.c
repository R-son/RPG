/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create cutscene music
*/

#include "my.h"

sfMusic *cutscene_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/cutscene.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

/*
** EPITECH PROJECT, 2020
** menu_music
** File description:
** create music
*/

#include "my.h"

sfMusic *menu_music(void)
{
    sfMusic *music;

    music = sfMusic_createFromFile("music/menu.ogg");
    if (!music)
        return (NULL);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

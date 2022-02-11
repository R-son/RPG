/*
** EPITECH PROJECT, 2020
** sound_effects
** File description:
** Manage sound effects
*/

#include "my.h"

sfMusic *sound_effects(char *filepath, int option)
{
    sfMusic *music = sfMusic_createFromFile(filepath);

    if (option == 1 || option == 3)
        sfMusic_play(music);
    if (sfMusic_getStatus(music) == sfStopped && option == 2)
        sfMusic_destroy(music);
    if (option == 3)
        sfMusic_setLoop(music, sfTrue);
    return music;
}
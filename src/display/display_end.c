/*
** EPITECH PROJECT, 2020
** display_end
** File description:
** display end
*/

#include "my.h"

sfSprite *display_end(void)
{
    sfTexture* texture;
    sfSprite* end;

    texture = sfTexture_createFromFile("image/victory.jpg", NULL);
    if (!texture)
        return (NULL);
    end = sfSprite_create();
    sfSprite_setTexture(end, texture, sfTrue);
    return (end);
}

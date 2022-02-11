/*
** EPITECH PROJECT, 2020
** create sprite
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_potion_button(void)
{
    sfTexture *t_pot;
    sfSprite *s_pot;

    t_pot = sfTexture_createFromFile("image/fight_menu/pot_but.png", NULL);
    s_pot = sfSprite_create();
    sfSprite_setTexture(s_pot, t_pot, sfTrue);
    sfSprite_setPosition(s_pot, (sfVector2f){305, 750});
    sfSprite_setTextureRect(s_pot, (sfIntRect){275, 0, 275, 59});
    return (s_pot);
}

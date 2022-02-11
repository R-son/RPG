/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** create joseph-ange back
*/

#include "my.h"

sfSprite *create_ja_back(void)
{
    sfTexture* txt;
    sfSprite* ja;
    char *filepath = "image/joseph_ange/ja_back.png";

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    ja = sfSprite_create();
    sfSprite_setTexture(ja, txt, sfTrue);
    sfSprite_setPosition(ja, (sfVector2f){965, 850});
    return (ja);
}

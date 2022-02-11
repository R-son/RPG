/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** shop window
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

sfSprite *shop_background(void)
{
    sfTexture* txt;
    sfSprite* background;
    char *filepath = "image/shop_back.jpg";

    txt = sfTexture_createFromFile(filepath, NULL);
    if (!txt)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, txt, sfTrue);
    return (background);
}

void disp_shop(sfRenderWindow* w, game *ga, sfSprite *red, sfSprite *blue)
{
    display_window(w, ga);
    text_money(w, ga);
    text_price_blue(w, ga);
    text_price_red(w, ga);
    sfRenderWindow_drawSprite(w, red, NULL);
    sfRenderWindow_drawSprite(w, blue, NULL);
}

void shop(sfRenderWindow* window, game *ga)
{
    sfMusic *music = shop_music();
    sfSprite *pot_red = create_pv_potion();
    sfSprite *pot_blue = create_sb_potion();

    ga->me.spriteback = shop_background();
    while (sfRenderWindow_isOpen(window)) {
        smove_pot_pv(window, ga, pot_red);
        smove_pot_sb(window, ga, pot_blue);
        disp_shop(window, ga, pot_red, pot_blue);
        if (sfKeyboard_isKeyPressed(sfKeySpace)) {
            sfMusic_stop(music);
            middle(window, ga);
        }
        while (sfRenderWindow_pollEvent(window, &ga->me.ev))
            close_window(window, ga->me.ev);
    }
    sfMusic_destroy(music);
    sfRenderWindow_close(window);
}

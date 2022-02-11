/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** inventory
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

sfSprite *inventory_background(void)
{
    sfTexture* texture;
    sfSprite* background;

    texture = sfTexture_createFromFile("image/pause/inventory.jpg", NULL);
    if (!texture)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, texture, sfTrue);
    return (background);
}

void display_inventory(sfRenderWindow* w, game *ga, sfSprite *r, sfSprite *bl)
{
    sfSprite *msg1 = create_message1();
    sfSprite *msg2 = create_message2();
    sfSprite *msg3 = create_message3();
    sfSprite *msg4 = create_message4();

    sfSprite_setPosition(r, (sfVector2f){929, 470});
    sfSprite_setPosition(bl, (sfVector2f){1591, 470});
    sfRenderWindow_drawSprite(w, r, NULL);
    sfRenderWindow_drawSprite(w, bl, NULL);
    if (ga->jo.win_vo != 0)
        sfRenderWindow_drawSprite(w, msg1, NULL);
    if (ga->jo.win_po != 0)
        sfRenderWindow_drawSprite(w, msg2, NULL);
    if (ga->jo.win_vi != 0)
        sfRenderWindow_drawSprite(w, msg3, NULL);
    if (ga->jo.win_fo != 0)
        sfRenderWindow_drawSprite(w, msg4, NULL);
    sfSprite_destroy(msg1);
    sfSprite_destroy(msg2);
    sfSprite_destroy(msg3);
    sfSprite_destroy(msg4);
}

int inventory(sfRenderWindow* window, game *ga, int i)
{
    sfSprite *back = inventory_background();
    sfSprite *red = create_pv_potion();
    sfSprite *blue = create_sb_potion();

    sfRenderWindow_drawSprite(window, back, NULL);
    display_inventory(window, ga, red, blue);
    imove_pot_pv(window, ga, red);
    imove_pot_sb(window, ga, blue);
    text_pot_pv(window, ga);
    text_pot_sb(window, ga);
    text_money(window, ga);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        i = 0;
    }
    sfSprite_destroy(red);
    sfSprite_destroy(blue);
    sfSprite_destroy(back);
    return (i);
}

int pause_to_inventory(sfRenderWindow* window, game *ga, int i, int s)
{
    if (sfKeyboard_isKeyPressed(sfKeyI) && s == 0) {
        i = 1;
    }
    if (i == 1)
        i = inventory(window, ga, i);
    return (i);
}

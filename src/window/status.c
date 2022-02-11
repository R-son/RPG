/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** status
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

sfSprite *status_background(void)
{
    sfTexture* texture;
    sfSprite* background;

    texture = sfTexture_createFromFile("image/pause/status.jpg", NULL);
    if (!texture)
        return (NULL);
    background = sfSprite_create();
    sfSprite_setTexture(background, texture, sfTrue);
    return (background);
}

void display_status(sfRenderWindow* w, game *ga)
{
    sfSprite *atk1 = create_attack1();
    sfSprite *atk2 = create_attack2();
    sfSprite *atk3 = create_attack3();

    if (ga->ba.niv_xp >= 3)
        sfRenderWindow_drawSprite(w, atk1, NULL);
    if (ga->ba.niv_xp >= 6)
        sfRenderWindow_drawSprite(w, atk2, NULL);
    if (ga->ba.niv_xp >= 10)
        sfRenderWindow_drawSprite(w, atk3, NULL);
    sfSprite_destroy(atk1);
    sfSprite_destroy(atk2);
    sfSprite_destroy(atk3);
}

int status(sfRenderWindow* window, game *ga, int s)
{
    sfSprite *back = status_background();

    sfRenderWindow_drawSprite(window, back, NULL);
    display_status(window, ga);
    text_lvl_sb(window, ga);
    text_pv(window, ga);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        s = 0;
    }
    sfSprite_destroy(back);
    return (s);
}

int pause_to_status(sfRenderWindow* window, game *ga, int s, int i)
{
    if (sfKeyboard_isKeyPressed(sfKeyS) && i == 0) {
        s = 1;
    }
    if (s == 1)
        s = status(window, ga, s);
    return (s);
}

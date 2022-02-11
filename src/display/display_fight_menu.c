/*
** EPITECH PROJECT, 2020
** display_fight_menu.c
** File description:
** display fight menu
*/

#include "my.h"

void display_atk_fm(sfRenderWindow *w, game *ga)
{
    switch (ga->fm.atk_nb) {
    case 0:
        sfRenderWindow_drawSprite(w, ga->jo.s_turning_around, NULL);
        break;
    case 1:
        sfRenderWindow_drawSprite(w, ga->jo.s_ora_ora, NULL);
        break;
    case 2:
        sfRenderWindow_drawSprite(w, ga->jo.s_star_breaker, NULL);
        break;
    case 3:
        sfRenderWindow_drawSprite(w, ga->jo.s_star_finger, NULL);
        break;
    case 4:
        ga->me.spriteback = ga->me.spriteback_zw;
        sfRenderWindow_drawSprite(w, ga->jo.s_star_platinium, NULL);
        break;
    default:
        break;
    }
}

void display_fight(sfRenderWindow *w, game *ga)
{
    if (ga->fm.fightorheal == FIGHT) {
        sfRenderWindow_drawSprite(w, ga->fm.oraora_button, NULL);
        sfRenderWindow_drawSprite(w, ga->fm.sb_button, NULL);
        sfRenderWindow_drawSprite(w, ga->fm.sf_button, NULL);
        sfRenderWindow_drawSprite(w, ga->fm.tw_button, NULL);
    }
}

void display_heal(sfRenderWindow *w, game *ga)
{
    sfFont *font;
    sfText *text = sfText_create();
    sfVector2f pos = {600, 760};
    char *str = NULL;

    if (ga->fm.fightorheal == HEAL) {
        sfRenderWindow_drawSprite(w, ga->ef.pot_button, NULL);
        str = my_inttostr(ga->jo.pot_pv, str);
        font = sfFont_createFromFile("boldfont/DejaVuSans-Bold.ttf");
        sfText_setFont(text, font);
        sfText_setString(text, str);
        sfText_setPosition(text, pos);
        sfRenderWindow_drawText(w, text, NULL);
        sfText_destroy(text);
    }
}

void display_fight_menu(sfRenderWindow *w, game *ga)
{
    display_window(w, ga);
    sfRenderWindow_drawSprite(w, ga->fm.bg_fight_menu, NULL);
    sfRenderWindow_drawSprite(w, ga->fm.fight_button, NULL);
    sfRenderWindow_drawSprite(w, ga->fm.heal_button, NULL);
    sfRenderWindow_drawSprite(w, ga->ba.bg_boss_heal_bar, NULL);
    sfRenderWindow_drawSprite(w, ga->ba.front_boss_heal_bar, NULL);
    sfRenderWindow_drawText(w, ga->ba.heal_boss_txt, NULL);
    sfRenderWindow_drawSprite(w, ga->fm.bg_jo_heal_bar, NULL);
    sfRenderWindow_drawSprite(w, ga->fm.front_jo_heal_bar, NULL);
    sfRenderWindow_drawText(w, ga->fm.heal_jo_txt, NULL);
    display_atk_fm(w, ga);
    display_fight(w, ga);
    display_heal(w, ga);
    if (ga->fm.boss_turn == 1) {
        ga->me.spriteback = ga->me.back;
        sfRenderWindow_drawSprite(w, ga->fm.ball_dmg, NULL);
    }
}

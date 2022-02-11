/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** rpg game
*/

#include "my.h"

void destroy_close(sfRenderWindow *w, game *ga)
{
    sfSprite_destroy(ga->me.spriteback);
    sfRenderWindow_close(w);
}

void rpg_close(sfRenderWindow *w, sfEvent ev)
{
    while (sfRenderWindow_pollEvent(w, &ev))
        if (ev.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeySpace))
            sfRenderWindow_close(w);
}

void my_rpg(sfRenderWindow *w, game *ga, int dmg_boss, sfMusic *music)
{
    while (sfRenderWindow_isOpen(w)) {
        display_fight_menu(w, ga);
        gestion_moves_fm(ga);
        if (ga->fm.fightorheal == FIGHT)
            gestion_sprite_fight(w, ga, dmg_boss);
        else
            gestion_sprite_heal(w, ga);
        if (ga->fm.boss_turn == 1)
            gestion_boss(ga, dmg_boss);
        gestion_fight_or_heal(w, ga);
        gestion_heal(ga);
        rpg_close(w, ga->me.ev);
        if (ga->ba.nb_hp <= 0)
            win(w, ga, music);
        if (ga->fm.nb_hp_jo <= 0) {
            sfMusic_stop(music);
            over(w, ga);
        }
    }
    sfMusic_destroy(music);
    destroy_close(w, ga);
}

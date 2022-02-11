/*
** EPITECH PROJECT, 2020
** struct_game
** File description:
** structure du jeu
*/

#include <SFML/Audio.h>

#ifndef STRUCT_JEU_H
#define STRUCT_JEU_H

typedef struct menu
{
    sfSprite *sprite_one;
    sfSprite *sprite_two;
    sfSprite *spriteback;
    sfSprite *spriteback_zw;
    sfSprite *back;
    sfMusic *menu_music;
    sfEvent ev;
    sfSprite *htp_but;
}menu;

typedef struct jotaro
{
    sfSprite *s_jotaro;
    sfSprite *s_ora_ora;
    sfSprite *s_star_finger;
    sfSprite *s_star_platinium;
    sfSprite *s_star_breaker;
    sfSprite *s_turning_around;
    sfSprite *star_ball;
    sfIntRect jo_rect;
    sfVector2f pos;
    int pot_pv;
    int pot_sb;
    int prix_pv;
    int prix_sb;
    int win_vo;
    int win_vi;
    int win_fo;
    int win_po;
    int money;
    int dmg_jo;
    float dmg_sb;
    int lvl_sb;
}jotaro;

typedef struct josephange
{
    sfSprite *s_josephange;
    sfIntRect ja_rect;
    sfVector2f ja_pos;
    sfClock *clock_ja;
}josephange;

typedef struct clock_m
{
    sfClock *c_ora_ora;
    sfClock *c_sp;
    sfClock *c_sb;
    sfClock *c_sf;
    sfClock *c_ta;
}clock_m;

typedef struct clock_monster
{
    sfClock *c_volcano_monster1;
    sfClock *c_volcano_monster2;
    sfClock *c_volcano_monster3;
    sfClock *c_volcano_monster4;
    sfClock *c_city_monster1;
    sfClock *c_city_monster2;
    sfClock *c_city_monster3;
    sfClock *c_city_monster4;
    sfClock *c_forest_monster1;
    sfClock *c_forest_monster2;
    sfClock *c_forest_monster3;
    sfClock *c_forest_monster4;
    sfClock *c_port_monster1;
    sfClock *c_port_monster2;
    sfClock *c_port_monster3;
    sfClock *c_port_monster4;
    sfClock *c_snow_monster1;
    sfClock *c_snow_monster2;
    sfClock *c_snow_monster3;
    sfClock *c_snow_monster4;
}clock_monster;

typedef struct monster
{
    sfSprite *s_snow_monster1;
    sfSprite *s_snow_monster2;
    sfSprite *s_snow_monster3;
    sfSprite *s_snow_monster4;
    sfSprite *s_volcano_monster1;
    sfSprite *s_volcano_monster2;
    sfSprite *s_volcano_monster3;
    sfSprite *s_volcano_monster4;
    sfSprite *s_forest_monster1;
    sfSprite *s_forest_monster2;
    sfSprite *s_forest_monster3;
    sfSprite *s_forest_monster4;
    sfSprite *s_port_monster1;
    sfSprite *s_port_monster2;
    sfSprite *s_port_monster3;
    sfSprite *s_port_monster4;
    sfSprite *s_city_monster1;
    sfSprite *s_city_monster2;
    sfSprite *s_city_monster3;
    sfSprite *s_city_monster4;
}monster;

typedef struct dialog
{
    sfSprite *di_sprite;
    sfIntRect di_rect;
    sfVector2f di_pos;
}dialog;

typedef struct fight_menu
{
    sfSprite *bg_fight_menu;
    sfSprite *fight_button;
    sfSprite *heal_button;
    sfSprite *oraora_button;
    sfSprite *sb_button;
    sfSprite *sf_button;
    sfSprite *tw_button;
    int fightorheal;
    int atk_nb;
    int xrect;
    int atk_on;
    int nb_maxhp_jo;
    int nb_hp_jo;
    sfSprite *bg_jo_heal_bar;
    sfSprite *front_jo_heal_bar;
    sfText *heal_jo_txt;
    char *str_heal_jo;
    int boss_turn;
    sfSprite *ball_dmg;
    int boss_wait;
}fight_menu;

typedef struct bar
{
    sfSprite *bg_boss_heal_bar;
    sfSprite *front_boss_heal_bar;
    sfSprite *bg_xp_bar;
    sfSprite *front_xp_bar;
    int nb_maxbar;
    int nb_maxhp;
    int nb_hp;
    int niv_xp;
    int nb_xpneed;
    int nb_xp;
    int nb_xpadd;
    sfText *xp_txt;
    char *str_xp;
    sfText *niv_txt;
    char *str_niv;
    sfText *heal_boss_txt;
    char *str_heal_boss;
}bar;

typedef struct stop
{
    sfEvent event;
    sfSprite *pause;
    sfSprite *p_play;
    sfSprite *p_menu;
    sfSprite *p_exit;
}stop;

typedef struct game_over
{
    sfSprite *sp_end;
    sfSprite *sp_over;
    sfMusic *menu_music;
}game_over;

typedef struct effect
{
    int sf_turn;
    int tw_cooldown;
    int power_up;
    int power_up_use;
    int city_dmg_wait;
    int city_dmg_turn;
    sfSprite *pot_button;
    int dmg_port;
}effect;

typedef struct game
{
    menu me;
    jotaro jo;
    josephange ja;
    clock_m cl_m;
    clock_monster cl_monster;
    monster mo;
    dialog di;
    fight_menu fm;
    bar ba;
    stop pa;
    game_over over;
    effect ef;
}game;

#endif

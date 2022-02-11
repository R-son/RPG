/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** compilation of fonction
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <time.h>
#include "struct_game.h"

#ifndef MY_H_
#define MY_H_

#define NTA(c1) (c1 + '0')

#define BOTTOM 0
#define LEFT 1
#define RIGHT 2
#define TOP 3

#define FIGHT 1
#define HEAL 2

#define TURNINGAROUND 0
#define ORAORA 1
#define STARBREAKER 2
#define STARFINGER 3
#define THEWORLD 4

#define DMG_BOSS1 14
#define DMG_BOSS2 11
#define	DMG_BOSS3 8
#define	DMG_BOSS4 5
#define	DMG_BOSS5 2

//WINDOWS

void launch_menu(sfRenderWindow* window);
void cutscene(sfRenderWindow* window, sfEvent ev, game *ga);
void spawn(sfRenderWindow* window, game *ga);
void middle(sfRenderWindow* window, game *ga);
void my_rpg(sfRenderWindow* window, game *ga, int dmg_boss, sfMusic *music);
void volcan_farm(sfRenderWindow* window, game *ga);
void volcan_path(sfRenderWindow* window, game *ga);
void volcan_final(sfRenderWindow* window, game *ga);
void ville_farm(sfRenderWindow* window, game *ga);
void ville_path(sfRenderWindow* window, game *ga);
void ville_final(sfRenderWindow* window, game *ga);
void foret_farm(sfRenderWindow* window, game *ga);
void foret_path(sfRenderWindow* window, game *ga);
void foret_final(sfRenderWindow* window, game *ga);
void port_path(sfRenderWindow* window, game *ga);
void port_farm(sfRenderWindow* window, game *ga);
void port_final(sfRenderWindow* window, game *ga);
void neige_farm(sfRenderWindow* window, game *ga);
void neige_path(sfRenderWindow* window, game *ga);
void neige_final(sfRenderWindow* window, game *ga);
int pause(sfRenderWindow* window, game *ga, sfMusic *music);
int pause_to_status(sfRenderWindow* window, game *ga, int s, int i);
int pause_to_inventory(sfRenderWindow* window, game *ga, int i, int s);
void shop(sfRenderWindow* window, game *ga);
void over(sfRenderWindow* win, game *ga);
void o_events(sfRenderWindow *window, sfEvent ev, sfMusic *music);
void close_window(sfRenderWindow *window, sfEvent ev);
void end(sfRenderWindow* win, game *ga);
void end_events(sfRenderWindow *window, sfEvent ev, sfMusic *music);
void how(sfRenderWindow* win);
sfSprite *how_back(void);
void htp_redirection(sfRenderWindow *w, game *ga);

//MUSICS

sfMusic *menu_music(void);
sfMusic *spawn_music(void);
sfMusic *cutscene_music(void);
sfMusic *middle_music(void);
sfMusic *ja_music(void);
sfMusic *diavolo_music(void);
sfMusic *dio_music(void);
sfMusic *kira_music(void);
sfMusic *kars_music(void);
sfMusic *foret_1(void);
sfMusic *volcan_1(void);
sfMusic *neige_1(void);
sfMusic *port_1(void);
sfMusic *ville_1(void);
sfMusic *foret_2(void);
sfMusic *ville_2(void);
sfMusic *volcan_2(void);
sfMusic *port_2(void);
sfMusic *neige_2(void);
sfMusic *shop_music(void);
sfMusic *over_music(void);
sfMusic *foret_music(void);
sfMusic *ville_music(void);
sfMusic *port_music(void);
sfMusic *volcan_music(void);
sfMusic *neige_music(void);
sfMusic *end_music(void);
sfMusic *how_music(void);

//LIB FUNCTIONS

int modif_strcmp(char const *s1, char const *s2);
int verif_env(char **env);
char *my_inttostr(int nb, char *s_nb);
char *intslashintstr(int nb1, int nb2, char *s_nb);
int calc_size_int(int nb);

//CSFML FUNCTIONS

void display_window(sfRenderWindow *window, game *ga);
sfSprite *play_button(void);
sfSprite *quit_button(void);
sfSprite *menu_background(void);
void event_quit(sfRenderWindow* window, sfEvent event, sfSprite* sprite);
void event_play(sfRenderWindow* window, sfEvent event, game *ga);
void button_loop(sfRenderWindow* window, game *ga);
void destroy_close(sfRenderWindow* window, game *ga);
void destroy_menu(sfRenderWindow* window, game *ga);
int my_compute_power_it(int nb, int p);
void event_dialog(game *ga);
void destroy_cutscne(sfRenderWindow* window, game *ga, sfMusic *music);
void move_jotaro(game *ga);
void middle_close(sfRenderWindow* window, sfEvent ev);
sfSprite *cutscene_background(void);
int obstacle_gestion(game *ga, sfVector2f a, sfVector2f b);
void middle_redirection(sfRenderWindow *window, game *ga, sfMusic *music);
int volcan_farm_obstacle(game *ga);
void display_text(sfRenderWindow* window);
void display_shop(sfRenderWindow* window);
int window_to_pause(sfRenderWindow* window, game *ga, sfMusic *music);

//CREATE SPRITE AND CLOCK

sfSprite *create_ora_ora(void);
sfSprite *create_star_platinium(void);
sfSprite *create_star_finger(void);
sfSprite *create_star_breaker(void);
sfSprite *create_turning_around(void);
sfSprite *create_jotaro(game *ga);
sfSprite *create_ja_front(game *ga);
sfSprite *create_ja_back(void);
sfSprite *create_snow_monster(void);
sfSprite *create_volcano_monster(void);
sfSprite *create_city_monster(void);
sfSprite *create_forest_monster(void);
sfSprite *create_port_monster(void);
sfSprite *create_dialog(game *ga);
sfSprite *create_dialog_port(game *ga);
sfSprite *create_dialog_neige(game *ga);
sfSprite *create_dialog_foret(game *ga);
sfSprite *create_dialog_ville(game *ga);
sfSprite *create_dialog_volcan(game *ga);
sfSprite *create_dialog_shop(game *ga);
sfSprite *create_house(void);
sfSprite *create_shop(void);
sfSprite *create_bg_fight_menu(void);
sfSprite *create_fight_button(void);
sfSprite *create_heal_button(void);
sfSprite *create_oraora_button(void);
sfSprite *create_sb_button(void);
sfSprite *create_sf_button(void);
sfSprite *create_tw_button(void);
sfSprite *vi_farm_background(void);
sfSprite *fo_farm_background(void);
sfSprite *vo_farm_background(void);
sfSprite *po_farm_background(void);
sfSprite *ne_farm_background(void);
sfSprite *vi_path_background(void);
sfSprite *fo_path_background(void);
sfSprite *vo_path_background(void);
sfSprite *po_path_background(void);
sfSprite *ne_path_background(void);
sfSprite *vi_final_background(void);
sfSprite *fo_final_background(void);
sfSprite *vo_final_background(void);
sfSprite *po_final_background(void);
sfSprite *ne_final_background(void);
sfSprite *vi_fight_background(void);
sfSprite *fo_fight_background(void);
sfSprite *vo_fight_background(void);
sfSprite *po_fight_background(void);
sfSprite *ne_fight_background(void);
sfSprite *vi_fight_zw(void);
sfSprite *fo_fight_zw(void);
sfSprite *vo_fight_zw(void);
sfSprite *po_fight_zw(void);
sfSprite *ne_fight_zw(void);
sfClock *create_c_clock(void);
sfSprite *create_front_boss_heal_bar(void);
sfSprite *create_bg_boss_heal_bar(void);
sfSprite *create_front_xp_bar(void);
sfSprite *create_bg_xp_bar(void);
void place_buttons(sfRenderWindow* w, sfSprite *pl, sfSprite *me, sfSprite *ex);
sfSprite *pause_background(void);
sfSprite *p_menu(void);
sfSprite *p_exit(void);
sfSprite *p_play(void);
sfText *create_xp_txt(void);
sfText *create_niv_txt(void);
sfSprite *create_star_ball(game *ga);
sfText *create_heal_boss_txt(void);
sfSprite *create_bg_jo_heal_bar(void);
sfSprite *create_front_jo_heal_bar(void);
sfText *create_heal_jo_txt(void);
sfSprite *create_ball_dmg(void);
sfSprite *create_pv_potion(void);
sfSprite *create_sb_potion(void);
sfSprite *create_squirrel(void);
sfSprite *create_knife(void);
sfSprite *create_ja_ball(void);
sfSprite *create_sha(void);
sfSprite *create_arrow(void);
void text_price_blue(sfRenderWindow* window, game *ga);
void text_price_red(sfRenderWindow* window, game *ga);
void text_money(sfRenderWindow* window, game *ga);
void text_pot_pv(sfRenderWindow* window, game *ga);
void text_pot_sb(sfRenderWindow* window, game *ga);
void text_lvl_sb(sfRenderWindow* window, game *ga);
void text_pv(sfRenderWindow* window, game *ga);
sfSprite *create_message1(void);
sfSprite *create_message2(void);
sfSprite *create_message3(void);
sfSprite *create_message4(void);
sfSprite *create_attack1(void);
sfSprite *create_attack2(void);
sfSprite *create_attack3(void);
sfSprite *create_potion_button(void);
sfSprite *create_htp(void);

//INIT STRUCT

void st_clock_move(game *ga);
void st_jotaro_atk(game *ga);
void st_monster(game *ga);
void st_fight_menu(game *ga);
void st_menu(game *ga);
void init_pos_monster(game *ga);
void st_clock_monster(game *ga);
void st_bar(game *ga);
void st_effect(game *ga);

//FIGHT ATTACKS

void atk_ora_ora(game *ga);
void atk_star_platinium(game *ga);
void atk_star_finger(game *ga);
void atk_star_breaker(game *ga);

//MOVES

void move_port_monster1(game *ga, int speed, int max_time);
void move_port_monster2(game *ga, int speed, int max_time);
void move_port_monster3(game *ga, int speed, int max_time);
void move_port_monster4(game *ga, int speed, int max_time);
void move_city_monster1(game *ga, int speed, int max_time);
void move_city_monster2(game *ga, int speed, int max_time);
void move_city_monster3(game *ga, int speed, int max_time);
void move_city_monster4(game *ga, int speed, int max_time);
void move_forest_monster1(game *ga, int speed, int max_time);
void move_forest_monster2(game *ga, int speed, int max_time);
void move_forest_monster3(game *ga, int speed, int max_time);
void move_forest_monster4(game *ga, int speed, int max_time);
void move_volcano_monster1(game *ga, int speed, int max_time);
void move_volcano_monster2(game *ga, int speed, int max_time);
void move_volcano_monster3(game *ga, int speed, int max_time);
void move_volcano_monster4(game *ga, int speed, int max_time);
void move_snow_monster1(game *ga, int speed, int max_time);
void move_snow_monster2(game *ga, int speed, int max_time);
void move_snow_monster3(game *ga, int speed, int max_time);
void move_snow_monster4(game *ga, int speed, int max_time);
void move_top(sfSprite *sprite, int speed);
void move_bottom(sfSprite *sprite, int speed);
void move_left(sfSprite *sprite, int speed);
void move_right(sfSprite *sprite, int speed);
void gestion_moves_fm(game *ga);
void move_turning_around(game *ga);
void move_direction(sfSprite *s_monster, int nb_direction, int speed);
void move_all_monster(game *ga);
void star_ball(sfRenderWindow* window, game *ga);

//DISPLAY
void display_fight_menu(sfRenderWindow *w, game *ga);
void display_fight(sfRenderWindow *w, game *ga);
void display_xp(sfRenderWindow *win, game *ga);
sfSprite *display_over(void);
sfSprite *display_end(void);

//MANAGE
int cutscene_loop(sfRenderWindow* window, sfEvent ev, game *ga);
void gestion_fight_or_heal(sfRenderWindow *w, game *ga);
void gestion_sprite_fight(sfRenderWindow *w, game *ga, int nb_dmg);
void gestion_sprite_heal(sfRenderWindow *w, game *ga);
void gestion_sprite_fight_oraora(sfRenderWindow *w, game *ga, int dmg_boss);
void gestion_sprite_fight_sb(sfRenderWindow *w, game *ga);
void gestion_sprite_fight_sf(sfRenderWindow *w, game *ga, int dmg_boss);
void gestion_sprite_fight_tw(sfRenderWindow *w, game *ga);
void gestion_fight_menu(sfRenderWindow *w, game *ga);
int mouseonsprite(sfRenderWindow *window, sfSprite *sprite, int w, int h);
int verif_max_size(sfSprite *s_monster, int nb_direction);
int next_nb_direction(int nb_direction);
int verif_max_size_volcano(sfSprite *s_monster, int nb_direction);
int verif_max_size_city(sfSprite *s_monster, int nb_direction);
int verif_max_size_forest(sfSprite *s_monster, int nb_direction);
int verif_max_size_port(sfSprite *s_monster, int nb_direction);
int verif_max_size_snow(sfSprite *s_monster, int nb_direction);
void gestion_bar(sfRenderWindow *w, game *ga);
void gestion_heal(game *ga);
void gestion_xp(game *ga);
void gestion_boss(game *ga, int nb_dmg);
void touch_monster1_city(game *ga);
void touch_monster2_city(game *ga);
void touch_monster3_city(game *ga);
void touch_monster4_city(game *ga);
void touch_monster1_volcano(game *ga);
void touch_monster2_volcano(game *ga);
void touch_monster3_volcano(game *ga);
void touch_monster4_volcano(game *ga);
void touch_monster1_forest(game *ga);
void touch_monster2_forest(game *ga);
void touch_monster3_forest(game *ga);
void touch_monster4_forest(game *ga);
void touch_monster1_port(game *ga);
void touch_monster2_port(game *ga);
void touch_monster3_port(game *ga);
void touch_monster4_port(game *ga);
void touch_monster1_snow(game *ga);
void touch_monster2_snow(game *ga);
void touch_monster3_snow(game *ga);
void touch_monster4_snow(game *ga);
void gestion_monster_volcan(sfRenderWindow* window, game *ga, sfMusic *music);
void gestion_monster_ville(sfRenderWindow* window, game *ga, sfMusic *music);
void gestion_monster_foret(sfRenderWindow* window, game *ga, sfMusic *music);
void gestion_monster_port(sfRenderWindow* window, game *ga, sfMusic *music);
void gestion_monster_neige(sfRenderWindow* window, game *ga, sfMusic *music);
int monster_damages_volcan(game *ga, sfSprite *sp);
int monster_damages_ville(game *ga, sfSprite *sp);
int monster_damages_foret(game *ga, sfSprite *sp);
int monster_damages_port(game *ga, sfSprite *sp);
int monster_damages_neige(game *ga, sfSprite *sp);
void gestion_boss_volcano(game *ga);
void gestion_boss_city(game *ga);
void gestion_boss_forest(game *ga);
void gestion_boss_port(game *ga);
void gestion_boss_snow(game *ga);
void gestion_heal_jo(game *ga);
void smove_pot_pv(sfRenderWindow* w, game *ga, sfSprite *sp);
void smove_pot_sb(sfRenderWindow* w, game *ga, sfSprite *sp);
void imove_pot_pv(sfRenderWindow* w, game *ga, sfSprite *sp);
void imove_pot_sb(sfRenderWindow* w, game *ga, sfSprite *sp);
void gestion_hp_jo(game *ga);
void city_dmg(game *ga);
void gestion_sprite_fight_sb2(sfRenderWindow *w, game *ga);
void gestion_sprite_fight_sf2(sfRenderWindow *w, game *ga, int nb_dmg);
int imove_pot_sb2(sfVector2i mouse, game *ga, sfVector2f c, sfVector2f d);
void potpv_on_square_i2(game *ga);
void win(sfRenderWindow *w, game *ga, sfMusic *music);

#endif

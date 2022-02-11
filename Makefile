##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## The Makefile of my_defender
##

LIB	=		./lib/my/

SOURCE	=		./src/

SPRITE	=		./src/sprite/

WINDOW	=		./src/window/

MUSIC	=		./src/music/

CREATE	=		./src/create/

CREATEFM	=	./src/create/fight_menu/

INIT_ST	=		./src/init_struct/

MOVES	=		./src/moves/

DISPLAY	=		./src/display/

MANAGE	=		./src/manage/

PAUSE	=		./src/pause/

SRC	=	main.c					\
		my_rpg.c				\
		$(LIB)modif_strcmp.c			\
		$(LIB)my_compute_power_it.c		\
		$(LIB)my_inttostr.c			\
		$(LIB)calc_size_int.c			\
		$(LIB)intslashintstr.c			\
		$(DISPLAY)display_sprite.c		\
		$(DISPLAY)display_fight_menu.c		\
		$(DISPLAY)display_window.c		\
		$(DISPLAY)display_over.c		\
		$(DISPLAY)display_text.c		\
		$(DISPLAY)display_end.c			\
		$(MANAGE)event_dialog.c			\
		$(MANAGE)destroy_windows.c		\
		$(MANAGE)verif_env.c			\
		$(MANAGE)gestion_fight_menu.c		\
		$(MANAGE)mouseonsprite.c		\
		$(MANAGE)verif_max_size.c		\
		$(MANAGE)gestion_bar.c			\
		$(MANAGE)gestion_boss.c			\
		$(MANAGE)gestion_sprite_fight.c		\
		$(MANAGE)touch_monster_ville.c		\
		$(MANAGE)touch_monster_neige.c		\
		$(MANAGE)touch_monster_foret.c		\
		$(MANAGE)touch_monster_volcan.c		\
		$(MANAGE)touch_monster_port.c		\
		$(MANAGE)gestion_boss_volcano.c		\
		$(MANAGE)gestion_boss_city.c		\
		$(MANAGE)gestion_boss_forest.c		\
		$(MANAGE)gestion_boss_port.c		\
		$(MANAGE)gestion_boss_snow.c		\
		$(MANAGE)move_potions.c			\
		$(MANAGE)drink_potion.c			\
		$(MANAGE)gestion_monster_volcan.c	\
		$(MANAGE)gestion_monster_foret.c	\
		$(MANAGE)gestion_monster_port.c		\
		$(MANAGE)gestion_monster_ville.c	\
		$(MANAGE)gestion_monster_neige.c	\
		$(MANAGE)win.c				\
		$(MANAGE)gestion_sprite_heal.c		\
		$(MANAGE)gestion_sprite_fight2.c	\
		$(WINDOW)launch_menu.c			\
		$(WINDOW)menu_events.c			\
		$(WINDOW)cutscene.c			\
		$(WINDOW)spawn.c			\
		$(WINDOW)middle.c			\
		$(WINDOW)cutscene_loop.c		\
		$(WINDOW)middle_redirection.c		\
		$(WINDOW)volcan_farm.c			\
		$(WINDOW)volcan_farm_obstacles.c	\
		$(WINDOW)volcan_path.c			\
		$(WINDOW)volcan_final.c			\
		$(WINDOW)ville_farm.c			\
		$(WINDOW)ville_path.c			\
		$(WINDOW)ville_final.c			\
		$(WINDOW)foret_farm.c			\
		$(WINDOW)foret_path.c			\
		$(WINDOW)foret_final.c			\
		$(WINDOW)port_path.c			\
		$(WINDOW)port_farm.c			\
		$(WINDOW)port_final.c			\
		$(WINDOW)neige_farm.c			\
		$(WINDOW)neige_path.c			\
		$(WINDOW)neige_final.c			\
		$(WINDOW)pause.c			\
		$(WINDOW)pause_sprites.c		\
		$(WINDOW)inventory.c			\
		$(WINDOW)status.c			\
		$(WINDOW)window_to_pause.c		\
		$(WINDOW)shop.c				\
		$(WINDOW)game_over.c			\
		$(WINDOW)o_events.c			\
		$(WINDOW)the_end.c			\
		$(WINDOW)end_events.c			\
		$(WINDOW)how.c				\
		$(CREATE)create_ora_ora.c		\
		$(CREATE)create_star_platinium.c	\
		$(CREATE)create_star_finger.c		\
		$(CREATE)create_star_breaker.c		\
		$(CREATE)create_turning_around.c	\
		$(CREATE)create_jotaro.c		\
		$(CREATE)create_ja_front.c		\
		$(CREATE)create_ja_back.c		\
		$(CREATE)create_monster_one.c		\
		$(CREATE)create_monster_two.c		\
		$(CREATE)create_dialog.c		\
		$(CREATE)create_dialog_port.c		\
		$(CREATE)create_dialog_neige.c		\
		$(CREATE)create_dialog_foret.c		\
		$(CREATE)create_dialog_ville.c		\
		$(CREATE)create_dialog_volcan.c		\
		$(CREATE)create_dialog_shop.c		\
		$(CREATE)create_house.c			\
		$(CREATE)create_shop.c			\
		$(CREATE)create_farm_backgrounds.c	\
		$(CREATE)create_path_backgrounds.c	\
		$(CREATE)create_final_backgrounds.c	\
		$(CREATE)create_c_clock.c		\
		$(CREATE)create_front_boss_heal_bar.c	\
		$(CREATE)create_bg_boss_heal_bar.c	\
		$(CREATE)create_front_xp_bar.c		\
		$(CREATE)create_bg_xp_bar.c		\
		$(CREATE)create_xp_txt.c		\
		$(CREATE)create_niv_txt.c		\
		$(CREATE)create_star_ball.c		\
		$(CREATE)create_heal_boss_txt.c		\
		$(CREATE)create_bg_jo_heal_bar.c	\
		$(CREATE)create_front_jo_heal_bar.c	\
		$(CREATE)create_heal_jo_txt.c		\
		$(CREATE)create_ball_dmg.c		\
		$(CREATE)create_potions.c		\
		$(CREATE)create_fight_backgrounds.c	\
		$(CREATE)create_launched_sprites.c	\
		$(CREATE)create_shop_txt.c		\
		$(CREATE)create_fight_zw.c		\
		$(CREATE)invetory_status_txt.c		\
		$(CREATE)create_messages.c		\
		$(CREATE)create_attack.c		\
		$(CREATE)create_htp.c			\
		$(CREATEFM)create_bg_fight_menu.c	\
		$(CREATEFM)create_fight_button.c	\
		$(CREATEFM)create_heal_button.c		\
		$(CREATEFM)create_oraora_button.c	\
		$(CREATEFM)create_sb_button.c		\
		$(CREATEFM)create_sf_button.c		\
		$(CREATEFM)create_tw_button.c		\
		$(CREATEFM)create_potion_button.c	\
		$(MUSIC)menu_music.c			\
		$(MUSIC)spawn_music.c			\
		$(MUSIC)cutscene_music.c		\
		$(MUSIC)middle_music.c			\
		$(MUSIC)ja_music.c			\
		$(MUSIC)diavolo_music.c			\
		$(MUSIC)dio_music.c			\
		$(MUSIC)kars_music.c			\
		$(MUSIC)kira_music.c			\
		$(MUSIC)volcan.c			\
		$(MUSIC)foret.c				\
		$(MUSIC)port.c				\
		$(MUSIC)neige.c				\
		$(MUSIC)ville.c				\
		$(MUSIC)shop_music.c			\
		$(MUSIC)over_music.c			\
		$(MUSIC)fight_foret.c			\
		$(MUSIC)fight_port.c			\
		$(MUSIC)fight_ville.c			\
		$(MUSIC)fight_neige.c			\
		$(MUSIC)fight_volcan.c			\
		$(MUSIC)end_music.c			\
		$(MUSIC)how_music.c			\
		$(INIT_ST)st_jotaro_atk.c		\
		$(INIT_ST)st_clock_move.c		\
		$(INIT_ST)st_monster.c			\
		$(INIT_ST)st_fight_menu.c		\
		$(INIT_ST)st_menu.c			\
		$(INIT_ST)st_clock_monster.c		\
		$(INIT_ST)st_bar.c			\
		$(INIT_ST)st_effect.c			\
		$(MOVES)atk_jotaro.c			\
		$(MOVES)move_monster.c			\
		$(MOVES)move_jotaro.c			\
		$(MOVES)move_sprite.c			\
		$(MOVES)obstacle_gestion.c		\
		$(MOVES)gestion_moves_fm.c		\
		$(MOVES)move_port_monster.c		\
		$(MOVES)move_city_monster.c		\
		$(MOVES)move_forest_monster.c		\
		$(MOVES)move_volcano_monster.c		\
		$(MOVES)move_snow_monster.c

NAME	=	my_rpg

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

CPPFLAGS=	-I include/

CFLAGS	=	-Wall -Wextra

CSFML	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CSFML)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all fclean re

/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** volcan farm obstacles
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "struct_game.h"
#include "my.h"

int volcan_farm_obstacle_c(game *ga)
{
    sfVector2f a = {880, 425};
    sfVector2f b = {955, 465};
    sfVector2f c = {640, 290};
    sfVector2f d = {715, 330};
    sfVector2f e = {780, 150};
    sfVector2f f = {965, 195};
    sfVector2f g = {1075, 285};
    sfVector2f h = {1145, 330};
    sfVector2f i = {1215, 475};
    sfVector2f j = {1295, 520};

    if ((obstacle_gestion(ga, a, b) == 1)
        && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1)
        && (obstacle_gestion(ga, g, h) == 1)
        && (obstacle_gestion(ga, i, j) == 1))
        return (1);
    return (0);
}

int volcan_farm_obstacle_b(game *ga)
{
    sfVector2f a = {520, 820};
    sfVector2f b = {745, 980};
    sfVector2f c = {1000, 850};
    sfVector2f d = {1900, 990};
    sfVector2f e = {1580, 285};
    sfVector2f f = {1920, 980};
    sfVector2f g = {785, 610};
    sfVector2f h = {905, 655};
    sfVector2f i = {925, 585};
    sfVector2f j = {1010, 625};
    sfVector2f k = {875, 530};
    sfVector2f l = {960, 570};

    if ((obstacle_gestion(ga, a, b) == 1)
        && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1)
        && (obstacle_gestion(ga, g, h) == 1)
        && (obstacle_gestion(ga, i, j) == 1)
        && (obstacle_gestion(ga, k, l) == 1))
        return (1);
    return (0);
}

int volcan_farm_obstacle(game *ga)
{
    sfVector2f a = {520, 395};
    sfVector2f b = {625, 435};
    sfVector2f c = {590, 450};
    sfVector2f d = {760, 545};
    sfVector2f e = {645, 560};
    sfVector2f f = {715, 600};
    sfVector2f g = {520, 560};
    sfVector2f h = {620, 650};
    sfVector2f i = {1215, 605};
    sfVector2f j = {1900, 980};

    if ((volcan_farm_obstacle_b(ga) == 1)
        && (volcan_farm_obstacle_c(ga) == 1)
        && (obstacle_gestion(ga, a, b) == 1)
        && (obstacle_gestion(ga, c, d) == 1)
        && (obstacle_gestion(ga, e, f) == 1)
        && (obstacle_gestion(ga, g, h) == 1)
        && (obstacle_gestion(ga, i, j) == 1))
        return (1);
    return (0);
}

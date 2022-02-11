/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"

int main(int ac, char **av, char **env)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *w;

    if (ac != 1 || av[0] == NULL)
        return (84);
    if (verif_env(env) == -1)
        return (84);
    w = sfRenderWindow_create(mode, "SFML Window", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(w, 60);
    if (!w)
        return (84);
    launch_menu(w);
    return (0);
}

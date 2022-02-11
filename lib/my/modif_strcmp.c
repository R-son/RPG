/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** my_strcmp modif
*/

int modif_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        if ((s1[i] - s2[i] == 0) && (s1[i] == '=' || s2[i] == '='))
            return (0);
        i++;
    }
    return (s1[i] - s2[i]);
}

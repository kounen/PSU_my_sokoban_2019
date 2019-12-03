/*
** EPITECH PROJECT, 2019
** my_atoi.c
** File description:
** Sokoban
*/

int my_atoi(char *str)
{
    int i = 0;
    int nbr = 0;

    for (; str[i] <= '9' && str[i] >= '0' && str[i]; i++) {
        nbr = nbr * 10 + str[i] - 48;
    }
    return nbr;
}

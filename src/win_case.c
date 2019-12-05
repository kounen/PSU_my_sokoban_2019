/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** win_case
*/

#include "my.h"

void win_case(void)
{
    int nb = 0;

    if (map[storage_place[nb].x][storage_place[nb].y] == 'X')
        nb = nb + 1;
    if (nb == storages_nbr)
        exit(0);
}

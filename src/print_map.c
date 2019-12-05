/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** print_map
*/

#include "my.h"

void print_map(void)
{
    int nb = 0;

    clear();
    while (nb < storages_nbr) {
        if (map[storage_place[nb].x][storage_place[nb].y]\
        == ' ')
            map[storage_place[nb].x][storage_place[nb].y]\
            = 'O';
        nb = nb + 1;
    }
    for (int line = 0; line < lines_nbr; line++) {
        printw(map[line]);
        printw("\n");
    }
    refresh();
}

/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** print_map
*/

#include "my.h"

void print_map(void) {
    clear();
    for (int i = 0; i < lines_nbr; i++) {
        printw(map[i]);
        printw("\n");
    }
}

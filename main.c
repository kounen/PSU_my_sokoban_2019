/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** Sokoban
*/

#include "my.h"

int main(void)
{
    initscr();
    curs_set(0);
    cbreak();
    noecho();
    create_map_from_buffer();
    while (1) {
        print_map();
        move_player();
    }
    clear();
    endwin();
    return 0;
}

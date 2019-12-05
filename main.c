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
    keypad(stdscr, true);
    cbreak();
    noecho();
    create_map_from_buffer();
    find_player();
    find_storage();
    while (1) {
        print_map();
        play_game(getch());
    }
    endwin();
    return 0;
}

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
    print_map();
    while (1) {
        play_game(getch());
        print_map();
        win_case();
    }
    endwin();
    return 0;
}

/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** play_game
*/

#include "my.h"

void play_game(int keypress)
{
    switch(keypress) {
        case KEY_DOWN:
            move_down();
            break;
        case KEY_UP:
            move_up();
            break;
        case KEY_LEFT:
            move_left();
            break;
        case KEY_RIGHT:
            move_right();
            break;
        case ' ':
            reset_map();
            break;
    }
    find_player();
    find_storage();
}

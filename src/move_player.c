/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** move_player
*/

#include "my.h"

void move_player(void)
{
    int touch = getch();

    switch(touch) {
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
    }
}

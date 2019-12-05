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
            move_down(player.x, player.y);
            break;
        case KEY_UP:
            move_up(player.x, player.y);
            break;
        case KEY_LEFT:
            move_left(player.x, player.y);
            break;
        case KEY_RIGHT:
            move_right(player.x, player.y);
            break;
        case ' ':
            reset_map(player.x, player.y);
            break;
    }
    find_player();
}

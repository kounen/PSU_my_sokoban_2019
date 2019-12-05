/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** move_left
*/

#include "my.h"

void move_left(int x, int y)
{
    switch (map[x][y - 1]) {
    case ' ':
    case 'O':
        map[x][y - 1] = 'P';
        map[x][y] = ' ';
        break;
    case 'X':
        if (map[x][y - 2] == '#')
            break;
        else if (map[x][y - 2] == 'O' || map[x][y - 2] == ' ') {
            map[x][y - 2] = 'X';
            map[x][y - 1] = 'P';
            map[x][y] = ' ';
        }
        break;
    case '#':
        break;
    }
}

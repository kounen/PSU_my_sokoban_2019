/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** move_up
*/

#include "my.h"

void move_up(int x, int y)
{
    switch (map[x - 1][y]) {
    case ' ':
    case 'O':
        map[x - 1][y] = 'P';
        map[x][y] = ' ';
        break;
    case 'X':
        if (map[x - 2][y] == '#')
            break;
        else if (map[x - 2][y] == 'O' || map[x - 2][y] == ' ') {
            map[x - 2][y] = 'X';
            map[x - 1][y] = 'P';
            map[x][y] = ' ';
        }
        break;
    case '#':
        break;
    }
}

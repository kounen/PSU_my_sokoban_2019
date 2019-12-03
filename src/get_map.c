/*
** EPITECH PROJECT, 2019
** get_map.c
** File description:
** BSQ
*/

#include "my.h"

int **create_map(char *buffer, int lines_nbr, int char_nbr)
{
    int **map = malloc(sizeof(char *) * lines_nbr);
    int i = 0;

    for (; buffer[i] != '\n'; i++);
    i = i + 1;
    for (int line = 0; line < lines_nbr; line++) {
        map[line] = malloc(sizeof(int) * (char_nbr - 1));
        for (int c = 0; c < char_nbr - 1; c++) {
            map[line][c] = buffer[i];
            i++;
        }
        i++;
    }
    return map;
}

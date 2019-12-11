/*
** EPITECH PROJECT, 2019
** get_map.c
** File description:
** Sokoban
*/

#include "my.h"

void create_map_from_buffer(void)
{
    int line = 0;
    int shift = 0;

    map = malloc(sizeof(char *) * lines_nbr);
    for (int i = 0; buffer[i]; i++) {
        if (buffer[i] == '\n') {
            map[line] = malloc(i - shift);
            for (int column = 0; buffer[column + shift] != '\n'; column++) {
                map[line][column] = buffer[column + shift];
                map[line][column + 1] = '\0';
            }
            if (buffer[i + 1] == '\n') {
                map[line = line + 1] = "";
                i = i + 1;
            }
            i = i + 1;
            shift = i;
            line++;
        }
    }
}

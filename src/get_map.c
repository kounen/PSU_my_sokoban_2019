/*
** EPITECH PROJECT, 2019
** get_map.c
** File description:
** Sokoban
*/

#include "my.h"

void create_map_from_buffer()
{
    int line = 0;
    int shift = 0;

    get_lines();
    map = malloc(sizeof(char *) * lines_nbr);
    for (int i = 0; buffer[i]; i++) {
        if (buffer[i] == '\n') {
            map[line] = malloc(i - shift);
            i = i + 1; //passer par dessus le \n
            for (int column = 0; buffer[column + shift] != '\n'; column++) {
                map[line][column] = buffer[column + shift];
                map[line][column + 1] = '\0';
            }
            shift = i;
            line++;
        }   
    }
    /*for (int line = 0; line < lines_nbr && columns_nbr != '\n'; line++) {
        map[line] = malloc(sizeof(char) * (columns_nbr));
        for (int column = 0; column < columns_nbr; column++) {
            map[line][column] = buffer[i];
            i++;
        }
        i++;
        }*/
}

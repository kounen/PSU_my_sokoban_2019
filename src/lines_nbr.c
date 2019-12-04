/*
** EPITECH PROJECT, 2019
** lines_nbr.c
** File description:
** Sokoban
*/

#include "my.h"

void get_lines(void)
{
    lines_nbr = 0;

    for (int i = 0; buffer[i]; i++) {
        if (buffer[i] == '\n')
            lines_nbr++;
    }
}

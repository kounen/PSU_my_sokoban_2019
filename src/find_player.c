/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** find_player
*/

#include "my.h"

void find_player(void)
{
    for (int line = 0; line < lines_nbr; line++)
        for (int column = 0; map[line][column] != '\0'; column++)
            if (map[line][column] == 'P') {
                player.x = line;
                player.y = column;
            }
}

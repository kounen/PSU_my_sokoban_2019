/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** reset_map
*/

#include "my.h"

void reset_map(void)
{
    for (int line = 0; line < lines_nbr; line++)
        free(map[line]);
    free(map);
    create_map_from_buffer();
    find_player();
}

/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** find_storage
*/

#include "my.h"

void find_storage(void)
{
    storages_nbr = 0;
    for (int line = 0; line < lines_nbr; line++)
        for (int column = 0; map[line][column] != '\0'; column++)
            if (map[line][column] == 'O')
                storages_nbr = storages_nbr + 1;
    storage_place = malloc(sizeof(storage_t) * storages_nbr + 1);
    storages_nbr = 0;
    for (int line = 0; line < lines_nbr; line++)
        for (int column = 0; map[line][column] != '\0'; column++)
            if (map[line][column] == 'O') {
                storage_place[storages_nbr].x = line;
                storage_place[storages_nbr].y = column;
                storages_nbr = storages_nbr + 1;
            }
}

/*
** EPITECH PROJECT, 2019
** usage.c
** File description:
** Sokoban
*/

#include "my.h"

void usage(void)
{
    my_printf("USAGE\n");
    my_printf("     ./my_sokoban map\n");
    my_printf("DESCRIPTION\n");
    my_printf("     map  file representing the warehouse map, containing");
    my_printf(" '#' for walls,\n");
    my_printf("          'P' for the player, 'X' for boxes ");
    my_printf("and 'O' for storage locations.\n");
}

/*
** EPITECH PROJECT, 2019
** usage.c
** File description:
** Sokoban
*/

#include <my.h>

void usage()
{
    my_printf("USAGE\n");
    my_printf("     ./my_sokoban map\n");
    my_printf("DESCRIPTION\n");
    my_printf("     map  file representing the warehouse map, containing\n");
    my_printf("          '#' for walls, 'P' for the player, 'X' for boxes\n");
    my_printf("          and 'O' for storage locations.\n");
}

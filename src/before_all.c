/*
** EPITECH PROJECT, 2019
** before_all.c
** File description:
** Sokoban
*/

#include <my.h>
#include <check_char.h>

__attribute__((constructor)) void before_all(int ac, char **av)
{
    if (ac != 2) {
        my_printf("Bad number of argument(s)\n");
        exit(84); //exit est une fonction de la librairie standard <stdlib.h>
    }
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        usage();
        exit(0);
    }
    fd = open(av[1], O_RDONLY);
    if (fd == - 1) {
        my_printf("Impossible to open the file (not exist, bad path...)\n");
        exit(84);
    }
    stat(av[1], &sb);
    if (sb.st_size == 0) {
        my_printf("Empty file\n");
        exit(84);
    }
    map = malloc(sb.st_size);
    read(fd, map, sb.st_size);
    close(fd);
    for (int i = 0; map[i]; i++) {
        if (CHECK_CHAR(map[i]))
            my_printf("Bad character(s) in the map\n");
        exit(84);
    }
}

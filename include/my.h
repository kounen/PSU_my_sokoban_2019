/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** Sokoban
*/

#ifndef MY_H_
#define MY_H_

#include "my_printf.h"
#include <stddef.h>
#include <curses.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

char *buffer;
char **map;
int lines_nbr;
struct stat sb;
int fd;

void usage();
void get_lines();
void create_map_from_buffer();
void print_map();

#endif /* !MY_H_ */

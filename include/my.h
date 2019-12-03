/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** Sokoban
*/

#ifndef MY_H_
#define MY_H_

#include "printf.h" //my printf lib
#include <curses.h> //lib ncurses
#include <stdlib.h> //malloc, free, exit
#include <unistd.h> //read, write, close
#include <fcntl.h> //open
#include <sys/stat.h> //stat: filesize in bytes (1 byte == 8 bits == 1 octet)

char *buffer; //my buffer
char **map; //MAP en 2D
int lines_nbr; //nombre de lignes
struct stat sb; //stat
int fd; //file_descriptor

void usage();
void get_lines();
void create_map_from_buffer();

#endif /* !MY_H_ */

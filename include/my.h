/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** Sokoban
*/

#ifndef MY_H_
#define MY_H_

#include <printf.h> //my printf lib
#include <curses.h> //lib ncurses
#include <stdlib.h> //malloc, free, exit
#include <unistd.h> //read, write, close
#include <fcntl.h> //open
#include <sys/stat.h> //stat: filesize in bytes (1 byte == 8 bits == 1 octet)

char *map; //my buffer
struct stat sb; //stat
int fd; //file_descriptor

void usage();

#endif /* !MY_H_ */

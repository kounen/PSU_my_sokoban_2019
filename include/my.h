/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** Sokoban
*/

#ifndef MY_H_
#define MY_H_

#include "my_printf.h"
#include "player.h"
#include "storage.h"
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
player_t player;
storage_t *storage_place;
int storages_nbr;

void usage();
void play_game();
void get_lines();
void create_map_from_buffer();
void print_map();
void move_right(int x, int y);
void move_left(int x, int y);
void move_up(int x, int y);
void move_down(int x, int y);
void reset_map();
void find_player();
void find_storage();
void win_case();
void lose_case();

#endif /* !MY_H_ */

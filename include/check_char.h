/*
** EPITECH PROJECT, 2019
** check_char.h
** File description:
** Sokoban
*/

#ifndef CHECK_CHAR_
#define CHECK_CHAR_

#define CHECK_CHAR(CHAR)                                         \
    (CHAR != ' ' && CHAR != '#' && CHAR != 'X' && CHAR != 'O' && \
    CHAR != '\n' && CHAR != 'P')

#endif /* !CHECK_CHAR_ */

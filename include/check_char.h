/*
** EPITECH PROJECT, 2019
** check_char.h
** File description:
** Sokoban
*/

//Différence pour un define : #define AGE 18 et #define PRINTF(STR)
//Faire un macro dans son .h pour qu'il ne change pas sa valeur quand il ne le faut pas
//#define => préprocesseur
//utilité de #ifndef #define #endif => 

#ifndef CHECK_CHAR_
#define CHECK_CHAR_

#define CHECK_CHAR(CHAR) \
    (CHAR != ' ' && CHAR != '#' && CHAR != 'X' && CHAR != 'O' && \
     CHAR != '\n' && CHAR != 'P')

#endif /* !CHECK_CHAR_ */

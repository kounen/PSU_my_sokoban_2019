/*
** EPITECH PROJECT, 2019
** check_char.h
** File description:
** Sokoban
*/

//Différence pour un define : #define AGE 18 et #define PRINTF(STR)
//Faire un macro dans son .h pour qu'il ne change pas sa valeur quand il ne le faut pas
//#define => préprocesseur
//#ifndef #define #endif => headerguard (name), a.h et b.h. Ds a.h #include <b.h> et ds b.h #include <a.h>. Evite boucle INF car a.h -> #include <b.h> -> b.h -> #include <a.h> -> a.h...

#ifndef CHECK_CHAR_ //si existe pas (de if à end) SINON non (évite boucle inf et error quand on compile)
#define CHECK_CHAR_

#define CHECK_CHAR(CHAR) \
    (CHAR != ' ' && CHAR != '#' && CHAR != 'X' && CHAR != 'O' && \
     CHAR != '\n' && CHAR != 'P')

#endif /* !CHECK_CHAR_ */

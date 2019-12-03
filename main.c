/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** Sokoban
*/

#include "my.h"

int main()
{
    my_printf("%d\n", sb.st_size);
    initscr(); //fonction exécutée pour initialiser un programme utilisant la lib ncurses
    curs_set(0); //fonction rendant le curseur à l'état d'invisible(0), normal(1) ou très visible(2)
    cbreak(); //fonction rendant immédiatement disponible le caractère saisi (sans appui sur la touche entrée)
    noecho(); //fonction désactivant l'affichage sur l'écran d'une touche frappée au clavier
    create_map_from_buffer();
    printw("%d\n", lines_nbr);
    for(int i = 0; i < lines_nbr; i++) {
        printw(map[i]);
        printw("\n"); 
    }//même syntaxe que printf, fonction affichant une chaine de caractères à la position du curseur
    getch(); //fonction attendant la saisie d'un caractère pour fermer la fenêtre (tant qu'on a pas appuyer sur une touche la map est là) 
    clear(); //fonction d'effacement de l'écran
    endwin(); //fonction appelée avant de quitter le programme en mode curses qui permet de rétablir l'ancien mode du terminal
    return 0;
}

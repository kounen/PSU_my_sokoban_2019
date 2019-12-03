/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** Sokoban
*/

#include <my.h>

int main()
{
    initscr(); //fonction exécutée pour initialiser un programme utilisant la lib ncurses.
    cbreak(); //fonction rendant immédiatement disponible le caractère saisi (sans appui sur la touche entrée).
    noecho(); //fonction désactivant l'affichage sur l'écran d'une touche frappée au clavier.
    printw(map); //même syntaxe que printf, fonction affichant une chaine de caractères à la position du curseur.
    clear(); //fonction d'effacement de l'écran.
    endwin(); //fonction appelée avant de quitter le programme en mode curses qui permet de rétablir l'ancien mode du terminal.
    return 0;
}

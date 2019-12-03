/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** my_printf - B1 - Unix System Programming
*/

#include <printf.h>

void my_revstr(char *str)
{
    char save = 0;

    for (int i = 0; i < my_strlen(str) / 2; i++) {
        save = str[i];
        str[i] = str[my_strlen(str) - 1 - i];
        str[my_strlen(str) - 1 - i] = save;
    }
}

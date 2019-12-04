/*
** EPITECH PROJECT, 2019
** my_putchar.c
** File description:
** my_printf - B1 - Unix System Programming
*/

#include "my_printf.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

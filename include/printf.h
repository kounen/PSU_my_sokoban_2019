/*
** EPITECH PROJECT, 2019
** printf.h
** File description:
** Sokoban
*/

#ifndef PRINTF_H_
#define PRINTF_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdarg.h>
#include <limits.h>

char *print_pointer(long long index);
int unit_size(int nb);
char *hexa_nbr_x(long long nb);
char *hexa_capital(int nb);
int switch_letter_two(char *str, int i, va_list list);
int switch_letter_one(char *str, int i, va_list list);
int switch_letter_three(char *str, int i, va_list list);
int octal_nbr(int nb);
void integer_nbr(unsigned int nb);
void s_str(char *str);
int my_strlen(char const *str);
void my_revstr(char *str);
int my_putstr(char const *str);
void my_put_nbr(int nb);
void my_putchar(char c);
void my_printf(char *str, ...);
int binary_nbr(int nb);
int my_atoi(char *str);

#endif /* !PRINTF_H_ */

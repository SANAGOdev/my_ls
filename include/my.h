/*
** EPITECH PROJECT, 2022
** my header file
** File description:
** my header file
*/

#ifndef MY_
#define MY_

#include <dirent.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

void my_putchar(char c);
void my_putstr(char *str);
int my_ls(int argc, char *argv);
int flag_check(int argc, char **argv);

#endif /* !MY_ */

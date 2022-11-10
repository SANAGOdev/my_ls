/*
** EPITECH PROJECT, 2022
** my putstr
** File description:
** my putstr
*/

#include "../include/my.h"

void my_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}

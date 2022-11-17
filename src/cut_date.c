/*
** EPITECH PROJECT, 2022
** cut_date
** File description:
** cut_date
*/

#include "../include/my.h"

int cut_date(char *time)
{
    int i = 4;
    for (i; i < 16; i++) {
        my_printf("%c", time[i]);
    }
    my_printf("  ");
    time[16] = '\0';
    return 0;
}

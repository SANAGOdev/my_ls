/*
** EPITECH PROJECT, 2022
** checking rights
** File description:
** checking rights
*/

#include "../include/my.h"

int get_rights(int stmode)
{
    if (S_ISREG(stmode))
        my_printf("%c", '-');
    if (S_ISDIR(stmode))
        my_printf("%c", 'd');
    my_printf("%c", (S_IRUSR & stmode ? 'r' : '-'));
    my_printf("%c", (S_IWUSR & stmode ? 'w' : '-'));
    my_printf("%c", (S_IXUSR & stmode ? 'x' : '-'));
    my_printf("%c", (S_IRGRP & stmode ? 'r' : '-'));
    my_printf("%c", (S_IWGRP & stmode ? 'w' : '-'));
    my_printf("%c", (S_IXGRP & stmode ? 'x' : '-'));
    my_printf("%c", (S_IROTH & stmode ? 'r' : '-'));
    my_printf("%c", (S_IWOTH & stmode ? 'w' : '-'));
    my_printf("%c", (S_IXOTH & stmode ? 'x' : '-'));
    my_printf(". ");
    return 0;
}

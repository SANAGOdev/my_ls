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
        printf("%c", '-');
    if (S_ISDIR(stmode))
        printf("%c", 'd');
    printf("%c", (S_IRUSR & stmode ? 'r' : '-'));
    printf("%c", (S_IWUSR & stmode ? 'w' : '-'));
    printf("%c", (S_IXUSR & stmode ? 'x' : '-'));
    printf("%c", (S_IRGRP & stmode ? 'r' : '-'));
    printf("%c", (S_IWGRP & stmode ? 'w' : '-'));
    printf("%c", (S_IXGRP & stmode ? 'x' : '-'));
    printf("%c", (S_IROTH & stmode ? 'r' : '-'));
    printf("%c", (S_IWOTH & stmode ? 'w' : '-'));
    printf("%c", (S_IXOTH & stmode ? 'x' : '-'));
    printf(". ");
    return 0;
}

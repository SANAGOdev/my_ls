/*
** EPITECH PROJECT, 2022
** main file
** File description:
** main file
*/

#include "../include/my.h"

int main(int argc, char **argv)
{
    DIR *dir = opendir(argv[1]);
    if (dir == NULL)
        return 84;
    
    struct dirent *entity;
    entity = readdir(dir);
    while (entity != NULL) {
        my_putstr(entity->d_name);
        my_putchar('\n');
        entity = readdir(dir);
    }

    closedir(dir);
    return 0;
}
/*
** EPITECH PROJECT, 2022
** my_ls.c
** File description:
** my_ls file
*/

#include "../include/my.h"

int my_ls(int argc, char *argv)
{
    DIR *dir = opendir(argv);
    if (dir == NULL)
        return 84;

    struct dirent *entity;
    entity = readdir(dir);

    while (entity != NULL) {
        printf("%s\n", entity->d_name);
        entity = readdir(dir);
    }

    closedir(dir);
    return 0;
}
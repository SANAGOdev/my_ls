/*
** EPITECH PROJECT, 2022
** flag_check
** File description:
** flag check
*/

#include "../include/my.h"

int my_ls(int argc, char **argv)
{
    DIR *dir = opendir(argv[1]);
    if (dir == NULL)
        return 84;
    struct dirent *entity;
    entity = readdir(dir);
    char *flag = argv[2];

    while (entity != NULL) {
        if (flag == NULL) {
            printf("%s\n", entity->d_name);
            entity = readdir(dir);
        }
        else if (strcmp(flag, "-l") == 0) {
            struct stat info;
            char *dossier = entity->d_name;
            stat(dossier, &info);
            printf("Inode : %d\t", (int)info.st_ino);
            printf("Name : %s\n", entity->d_name);
            entity = readdir(dir);
        }
    }
    closedir(dir);
    return 0;
}
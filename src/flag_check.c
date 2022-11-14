/*
** EPITECH PROJECT, 2022
** flag_check
** File description:
** flag check
*/

#include "../include/my.h"

int my_ls(int argc, char **argv)
{
    char *opendirectory = argv[1];
    if (argv[1] == NULL || argv[1][0] == '-')
        opendirectory = ".";
    DIR *dir = opendir(opendirectory);
    if (dir == NULL)
        return 84;
    struct dirent *entity;
    entity = readdir(dir);
    char *flag;
    if (argv[2] != NULL)
        flag = argv[2];
    else if (argv[2] == NULL)
        flag = argv[1];
    while (entity != NULL) {
        if (flag == NULL || flag[0] != '-') {
            char *dname = entity->d_name;
            if (dname[0] == '.')
                NULL;
            else {
                my_putstr(entity->d_name);
                my_putstr("  ");
            }
            entity = readdir(dir);
        }
        else if (strcmp(flag, "-l") == 0) {
            struct stat info;
            char *dossier = entity->d_name;
            stat(dossier, &info);
            my_putstr("Inode :");
            my_put_nbr((int)info.st_ino);
            my_putstr("\tName : ");
            my_putstr(entity->d_name);
            my_putchar('\n');
            entity = readdir(dir);
        }
    }
    closedir(dir);
    my_putchar('\n');
    return 0;
}

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
        char *dname = entity->d_name;
        if (dname[0] == '.')
            NULL;
        else if (flag == NULL || flag[0] != '-') {
            my_putstr(entity->d_name);
            my_putstr("  ");
        }
        else if (strcmp(flag, "-l") == 0) {
            struct stat info;
            char *dossier = entity->d_name;
            stat(dossier, &info);
            if ((int)entity->d_type == 8) {
                printf("1 ");
            }
            else if ((int)entity->d_type == 4) {
                printf("2 ");
            }
            printf("%s\t", get_id_name(info.st_uid));
            printf("%s\t", get_id_name(info.st_gid));
            printf("\%d\t", info.st_size);
            printf("%s\n", entity->d_name);
        }
        entity = readdir(dir);
    }
    closedir(dir);
    my_putchar('\n');
    return 0;
}

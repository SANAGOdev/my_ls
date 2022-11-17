/*
** EPITECH PROJECT, 2022
** my ls
** File description:
** my ls
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
    struct dirent *entity = malloc(sizeof(struct dirent));
    struct stat *info = malloc(sizeof(struct stat));
    entity = readdir(dir);

    char *flag = flag_check(argc, argv);

    if (strcmp(flag, "-l") == 0)
        printf("total %d\n", get_total(opendirectory));
    while (entity != NULL) {
        if (entity->d_name[0] == '.')
            NULL;
        else if (flag == NULL || flag[0] != '-') {
            my_putstr(entity->d_name);
            my_putstr("  ");
        }
        else if (strcmp(flag, "-l") == 0) {
            char *dossier = entity->d_name;
            stat(dossier, info);
            printf("%ld", info->st_blocks);
            get_rights(info->st_mode);
            printf("%d ", count_content(entity));
            printf("%s  ", get_uid_name(info->st_uid));
            printf("%s  ", get_gid_name(info->st_gid));
            printf("%ld  ", info->st_size);
            cut_date(ctime(&info->st_mtime));
            printf("%s\n", entity->d_name);
        }
        entity = readdir(dir);
    }
    free(entity);
    free(info);
    closedir(dir);
    my_putchar('\n');
    return 0;
}

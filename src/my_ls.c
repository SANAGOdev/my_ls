/*
** EPITECH PROJECT, 2022
** my ls
** File description:
** my ls
*/

#include "../include/my.h"

int my_ls(int argc, char **argv)
{
    char *opendirectory = get_directory(argc, argv);
    DIR *dir = opendir(opendirectory);
    if (dir == NULL)
        return 84;
    struct dirent *entity = malloc(sizeof(struct dirent));
    struct stat *info = malloc(sizeof(struct stat));
    entity = readdir(dir);

    char *flag = flag_check(argc, argv);

    if (strcmp(flag, "-l") == 0)
        my_printf("total %d\n", get_total(opendirectory));
    while (entity != NULL) {
        if (entity->d_name[0] == '.')
            NULL;
        else if (flag == NULL || flag[0] != '-') {
            my_printf("%s", entity->d_name);
            my_printf("  ");
        }
        else if (strcmp(flag, "-l") == 0) {
            char *dossier = entity->d_name;
            stat(dossier, info);
            get_rights(info->st_mode);
            my_printf("%d ", count_content(entity));
            my_printf("%s  ", get_uid_name(info->st_uid));
            my_printf("%s  ", get_gid_name(info->st_gid));
            my_printf("%d  ", info->st_size);
            cut_date(ctime(&info->st_mtime));
            my_printf("%s\n", entity->d_name);
        }
        entity = readdir(dir);
    }
    free(entity);
    free(info);
    closedir(dir);
    my_printf("\n");
    return 0;
}

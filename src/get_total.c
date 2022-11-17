/*
** EPITECH PROJECT, 2022
** get total
** File description:
** get total
*/

#include "../include/my.h"

int get_total(char *current_dir)
{
    int total = 0;
    DIR *dir = opendir(current_dir);
    struct dirent *entity = malloc(sizeof(struct dirent));
    struct stat *info = malloc(sizeof(struct stat));
    entity = readdir(dir);
    while(entity != NULL) {
        if (entity->d_name[0] == '.')
            NULL;
        else if (entity->d_name[0] != '.') {
            stat(entity->d_name, info);
            total += info->st_blocks;
        }
        entity = readdir(dir);
    }
    free(entity);
    free(info);
    return total / 2;
}

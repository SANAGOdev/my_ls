/*
** EPITECH PROJECT, 2022
** count content
** File description:
** count content
*/

#include "../include/my.h"

int count_content(struct dirent *entity)
{
    int count = 0;
    if (entity->d_type == 8)
        count = 1;
    else if (entity->d_type == 4) {
        count = 2;
        DIR *dir = opendir(entity->d_name);
        struct dirent *sub_entity = readdir(dir);
        while (sub_entity != NULL) {
            if (sub_entity->d_name[0] == '.')
                NULL;
            else if (sub_entity->d_type == 4) {
                count += 1;
            }
            sub_entity = readdir(dir);
        }
    }
    return count;
}

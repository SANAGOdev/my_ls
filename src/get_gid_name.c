/*
** EPITECH PROJECT, 2022
** get gid name
** File description:
** get gid name
*/

#include "../include/my.h"

char *get_gid_name(int gid)
{
    struct group *gr;
    gr = getgrgid(gid);
    return gr->gr_name;
}

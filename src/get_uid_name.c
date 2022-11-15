/*
** EPITECH PROJECT, 2022
** get uid name
** File description:
** get uid name
*/

#include "../include/my.h"

char *get_id_name(int id)
{
    struct passwd *pws;
    pws = getpwuid(id);
    return pws->pw_name;
}

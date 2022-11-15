/*
** EPITECH PROJECT, 2022
** get uid name
** File description:
** get uid name
*/

#include "../include/my.h"

char *get_uid_name(int uid)
{
    struct passwd *pws;
    pws = getpwuid(uid);
    return pws->pw_name;
}

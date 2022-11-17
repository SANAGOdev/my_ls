/*
** EPITECH PROJECT, 2022
** get directory
** File description:
** get directory
*/

#include "../include/my.h"

char *get_directory(int argc, char **argv)
{
    char *directory;
    for (int i = 1; i <= argc; i++) {
        if (argv[i] == NULL)
            return directory = ".";
        else if (argv[i][0] != '-')
            return directory = argv[i];
    }
}

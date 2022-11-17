/*
** EPITECH PROJECT, 2022
** flag_check
** File description:
** flag check
*/

char *flag_check(int argc, char **argv)
{
    char *flag;
    for (int i = 0; i < argc; i++) {
        if (argv[i][0] == '-') {
            flag = argv[i];
        }
    }
    return flag;
}

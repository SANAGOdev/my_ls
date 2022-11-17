/*
** EPITECH PROJECT, 2022
** my header file
** File description:
** my header file
*/

#ifndef MY_
    #define MY_
    #include <dirent.h>
    #include <stddef.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <pwd.h>
    #include <grp.h>
    #include <time.h>

void my_putchar(char c);
void my_putstr(char *str);
int my_put_nbr(int nb);
int my_ls(int argc, char **argv);
char *get_uid_name(int uid);
char *get_gid_name(int gid);
int cut_date(char *time);
int get_rights(int stmode);
int count_content(struct dirent *entity);
int get_total(char *current_dir);
char *flag_check(int argc, char **argv);
char *get_directory(int argc, char **argv);
int conditions01(const char* format, int i, va_list list);
int my_strlen(char const *arr);
int my_printf(const char* format, ...);

#endif /* !MY_ */

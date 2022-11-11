
#include "../include/my.h"

int flag_check(int argc, char **argv)
{
    if (argc != 2 && argv[2] == '-l') {
        DIR *dir = opendir(argv[1]);
        if (dir == NULL)
            return 84;

        struct dirent *entity;
        entity = readdir(dir);

        
    }
}
// int my_ls(int argc, char *argv)
// {
//     DIR *dir = opendir(argv);
//     if (dir == NULL)
//         return 84;

//     struct dirent *entity;
//     entity = readdir(dir);

//     while (entity != NULL) {
//     struct stat info;
//     char *dossier = entity->d_name;
//     stat(dossier, &info);
//         printf("Inode: %d\t", (int)info.st_ino);
//         printf("Name : %s\n", entity->d_name);
//         entity = readdir(dir);
//     }

//     closedir(dir);
//     return 0;
// }
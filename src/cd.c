#include "../libs/msh.h"
int cd(char *__buf)
{
    char *dir = strremove(__buf,"cd ");
    char *home = getenv("HOME");;
    dir = replaceWord(dir,"~",home);
    return chdir(dir);
}
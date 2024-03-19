#include "../libs/msh.h"

int main(int argc, const char *argv[])
{
	char *buf = malloc(1024*sizeof(char));
	
    for (size_t i = 0; i < argc; i++)
    {
        if(!strcmp("--dir",argv[i]))
        {
            chdir(argv[i+1]);
        }
    }
    
	while(strcmp("exit",buf))
	{
		RunShell();
		readline(buf);
        if(strstr(buf,"cd") != NULL)
        {
            cd(buf);
        }
		else if(!strcmp(buf,"clear"))
		{
			clear();
		}
	else
		{
            system(buf);
        }
	}
    free(buf);
	return false;
}

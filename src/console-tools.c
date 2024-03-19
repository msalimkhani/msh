#include "../libs/msh.h"
int readline(char *__buf)
{
	return scanf("%[^\n]%*c",__buf);
}

int clear()
{
	system("clear");
	return false;
}
int RunShell()
{
	char *cwd = malloc(1024*sizeof(char));
	if((cwd = getcwd(cwd, PATH_MAX)) != NULL)
	{
	char *home = getenv("HOME");
	cwd = replaceWord(cwd,home,"~");
	printf("%s $ ",cwd);
	//free(cwd);
	}
	else
	{
		printf("getcwd error");
		return 129;
	}
}
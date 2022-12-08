#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
	pid_t pid1, pid2;
	int status, i;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
		for(i = 0; i < 5; i++)
		{
			pid1 = fork();
		       	if (pid1 == 0)
			{
				pid2 = execve(argv[0], argv, NULL);
				exit(1);
			}
		}
		while(wait(&status) != pid1);
	return (0);
}

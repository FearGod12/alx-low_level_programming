#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
	pid_t pid1, pid2;
	int status, i;
	char *argv[] = {"ls /tmp", "-l", NULL};

	pid2 = execve(argv[0], argv, NULL);
	
	return (0);
}

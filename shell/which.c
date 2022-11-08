#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{	
	pid_t pid;
	int status, i = 1;
	char *buff = NULL;
	size_t n = 0;
	char *token, *delim = " ";


	printf("$");
	getline(&buff, &n, stdin);

	char *tokens[n + 1];// = malloc((sizeof(char *) * 1024));
	if (!tokens)
	{
		perror("allocation error");
		exit(EXIT_FAILURE);
	}
	while(token != NULL)
	{
		token = strtok(buff, delim);
		tokens[i] = token;
		i++;
	}
	tokens[i] = NULL;
	tokens[0] = "/bin/which";
	execve(tokens[0], tokens, NULL);
	free(tokens);
	free(buff);
	return (0);
}

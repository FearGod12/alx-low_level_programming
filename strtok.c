#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *
 */
int main()
{
	char ptr[] = "i love you";
	char *delim = " ";
	char *token;
	token = strtok(ptr, delim);
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}

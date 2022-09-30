#include <stdlib.h>
#include <stdio.h>

/**
 * main - performs addition
 * @argc: number of arguments including program name
 * @argv: array of arguments
 * Return: 0 for successand 1 for failure
 */
int main(int argc, char *argv[])
{
	int i;
	int result;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) <= 0 || atoi(argv[i]) >= 9)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			result += atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (0);
}

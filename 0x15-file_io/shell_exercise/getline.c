#include <stdio.h>
#include <stdlib.h>

/**
 * Write a program that prints "$ ", wait for the
 * user to enter a command, prints it on the next line.
 */
int main()
{
	char *ptr = malloc(sizeof(char) * 10);
	ssize_t n = 30;

	printf("$\n");
	getline(&ptr, &n, stdin);
	printf("%s has a size of %ld\n", ptr, n);
	free(ptr);
	return (0);
}

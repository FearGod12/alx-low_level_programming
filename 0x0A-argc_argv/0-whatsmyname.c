#include <stdio.h>

/**
 * main - prints the program name
 * @argc: number  of arguments
 * @argv: array of arguments
 * Return: always 0 dor success
 */
int main(int argc __attribute__ ((unused)), char* argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

#include <stdio.h>

/**
 * main - prints the number of arguments paased to it
 * @argc: number of arguments
 * @argv: array of strings
 * Return: always 0
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

#include "main.h"

/**
 * _puts - prints a string to the stdout
 * @str: string to be printed
 * void: returns nothing
 */
void _puts(char *str)
{
	while (*str != \0)
	{
		-putchar(*str);
		*str++;
	}
	-putchar('\n');
}

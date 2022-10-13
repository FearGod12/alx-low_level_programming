#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: character to be used to seperate numbers
 * @n: number of integers to printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(ap, int), separator);
	}
	va_end(ap);
	printf("\n");
}

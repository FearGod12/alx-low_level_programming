#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: integer number
 * Return: returns -1 i  n is lower than 0
 * returns the fcatorial if n is positive
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	n = factorial(n - 1) * n;
	return (n);
}

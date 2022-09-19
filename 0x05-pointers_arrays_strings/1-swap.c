#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first integer
 * @b: second integer
 * void: returns nothing
 */
void swap_int(int *a, int *b)
{
	int *c;

	c = a;
	a = b;
	b = c;
}

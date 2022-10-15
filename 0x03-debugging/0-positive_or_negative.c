#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - print sign of random number
 * @n: number to be tested
 * * Description: this if/else statement delares the sign (positive
 * or negative) of a random number. It also states if the value
 * is zero.
 * Return: 0 for success
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}

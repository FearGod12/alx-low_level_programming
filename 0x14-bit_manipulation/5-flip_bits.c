#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number to transform
 *
 * Return: number of bits to transform
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, a, b, num = 0;

	for (i = 63; i >= 0; i--)
	{
		a = (n >> i) & 1;
		b = (m >> i) & 1;
		if (a != b)
			num++;
	}

	return (num);
}

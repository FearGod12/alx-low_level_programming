#include "main.h"

/**
 * claer_bit - set the value of a bit to 0 at a given index.
 * @n: pointer to the number
 * @index: is the index, starting from 0 of the bit you want to set
 * Return:  1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= (sizeof(n) * 8))
		return (-1);
	*n = *n & ( ~ (1 << index));
	return (1);
}
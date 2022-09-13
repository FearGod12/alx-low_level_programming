#include "main.h"

/**
* _islower - checks for lower case
*
* int: returns an integer value
*
* @c: character to be checked if lower case, type int
*
* Returns: 1 if c is lowercase, Returns 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{	return (1);
	}
	else
	{
		return (0);
	}
}

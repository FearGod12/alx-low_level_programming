#include "main.h"

/**
* _islower - checks for lower case
*
* @c: character to be checked if lower case, type int
*
* int: accepts integer values
* return: Returns 1 if c is lowercase
* Returns 0 otherwise
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

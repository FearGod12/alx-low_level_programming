#include "main.h"

/**
*
* _islower - checks for lower case
*
* int: accepts integer values
* return: Returns 1 if c is lowercase
* Returns 0 otherwise
*/
int _islower(int c)
{
	if ((c >= 48) && (c <= 57))
	{	return (1);
	}
	else
	{
		return (0);
	}
}

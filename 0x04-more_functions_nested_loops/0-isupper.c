#include "main.h"

/**
* _islower - returns 1 if char is uppercase
*
* @c: character to be checked if uppercase, type int
*
* Return: 1 if lower case, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{	return (1);
	}
	else
	{
		return (0);
	}
}

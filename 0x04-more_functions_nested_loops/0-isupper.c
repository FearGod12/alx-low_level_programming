#include "main.h"

/**
* _isupper - returns 1 if char is uppercase
*
* @c: character to be checked if uppercase, type int
*
* Return: 1 if upper case, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{	return (1);
	}
	else
	{
		return (0);
	}
}

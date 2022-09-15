#include "main.h"

/**
* _isdigit - returns 1 if char is digit from 0 to 9
*
* @c: character to be checked if digit, type int
*
* Return: 1 if upper case, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{	return (1);
	}
	else
	{
		return (0);
	}
}

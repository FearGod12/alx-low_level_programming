#include "main.h"

/**
* print_alphabet - prints lower case alphabet
* @void: does not return a value
*
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

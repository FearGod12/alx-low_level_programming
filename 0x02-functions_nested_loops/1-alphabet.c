#include "main.h"

/* description: a function that prints the lower case alphabets
* @void: returns no value
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

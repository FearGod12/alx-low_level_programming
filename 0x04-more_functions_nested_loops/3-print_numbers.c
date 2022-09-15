#include "main.h"

/**
* print_numbers - prints numbers 0 to 9
* @void: does not accept a value
* Return: returns nothing for success
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}

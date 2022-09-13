#include "main.h"

/**
* print_alphabet - prints 10 times the alphabets
*
* @void: returns no value
**/
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
			i++;
	}
		_putchar('\n');
}
/**
* print_alphabet_x10 - prints 10 times the alphabets
* @void: returns no value
*/
void print_alphabet_x10(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		print_alphabet();
	}
}

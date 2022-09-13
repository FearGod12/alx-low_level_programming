#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabets
*
* @void: returns no value
*/
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
 * * print_alphabet_x10 - prints 10 times the alphabets
 * *
 * * @void: returns no value
 * */
void print_alphabet_x10(void)
{
        int n = 0;

        while (n <= 9)
	{
		print_alphabet();
	}
	_putchar('\n');
}

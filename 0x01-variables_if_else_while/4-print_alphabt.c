#include <stdio.h>

/**
* main - Prints alphabet
* @void: Empty parameter list for main.
*
* Description: Prints the alphabet in lower case except e and q
* Can only use putchar
*Return: 0 for success
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q')
	{
		letter++;
	}
	else if (letter == 'e')
	{
		letter++;
	}
	else
	{
		putchar(letter);
		letter++;								}
	}
	putchar('\n');
	return (0);
}

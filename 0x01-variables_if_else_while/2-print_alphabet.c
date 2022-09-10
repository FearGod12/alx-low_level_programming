#include <stdio.h>

/**
* main - Prints alphabet
* @void: Empty parameter list for main.
*
* Description: Prints the alphabet in lower case
* Can only use putchar
*Return: 0 for success
*/
int main(void)
{	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
		putchar('\n');
return (0);
}

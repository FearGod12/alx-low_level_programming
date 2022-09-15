#include <stdio.h>

/**
* main - Prints alphabet
* @void: Empty parameter list for main.
*
* Description: Prints the alphabets in lower and upper case
* Can only use putchar
*Return: 0 for success
*/
int main(void)
{	char alphlower = 'a';
	char alphupper = 'A';

	while (alphlower <= 'z')
	{
		putchar(alphlower);
		alphlower++;
	}
	while (alphupper <= 'Z')
	{
		putchar(alphupper);
		alphupper++;
	}
		putchar('\n');
return (0);
}

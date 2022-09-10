#include <stdio.h>

/**
* main - Prints alphabet
* @void: Empty parameter list for main.
*
* Description: Prints the numbers of base 10
*Return: 0 for success
*/
int main(void)
{	char numb = 0;

	while (numb <= 10)
	{
		printf("%d", numb);
		numb++;
	}
		putchar('\n');
return (0);
}

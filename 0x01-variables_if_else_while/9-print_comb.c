#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Prints alphabet
* @void: Empty parameter list for main.
*
* Description: Prints the numbers of base 10
* only putchar is allowed
* Return: 0 for success
*/
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}

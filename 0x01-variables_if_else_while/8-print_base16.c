#include <stdio.h>
#include <stdio.h>
#include <time.h>

/**
* main - Prints hexadecimals
* @void: Empty parameter list for main.
*
* Description: Prints the numbers of base 10
*Return: 0 for success
*/
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	num = 'a';

	while (num < 'g')
	{
		putchar(num);
		num++;
	}
		putchar('\n');
return (0);
}

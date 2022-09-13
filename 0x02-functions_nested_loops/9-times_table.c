#include "main.h"

/**
* times_table - prints the 9 times table
* @void: does not take a value
* Returns; 0 for success
*/
void times_table(void)
{
	int i;
	int j;
	int times;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			times = i * j;
			_putchar(times);
			_putchar('\n');
			_putchar(' ');
		}
	}
}

#include "main.h"

/**
* times_table - prints the 9 times table
* @void: does not take a value
* Returns; 0 for success
*/
void times_table(void)
{
	int y;
	int x;
	int prod;
	for (y = 0; y < 10; y++)
	{
		for (x = 0; x <= 10; x++)
		{
			prod = y * x;
			if (x != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else if ((prod < 10) && (x != 0))
			{
				_putchar(' ');
				_putchar((prod % 10) + '0');
			}
			else
				_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}

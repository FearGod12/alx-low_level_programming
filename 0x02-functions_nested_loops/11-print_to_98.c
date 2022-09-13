#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints from number given to 98
* @n: integer number passed by user
* @void: has no return value
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d,", n);
			n--;
			if (n == 98)
				printf("98");
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d,", n);
			n++;
			if (n == 98)
				printf("98");
		}
	}
	else
	{
		printf("%d", n);
	}
}

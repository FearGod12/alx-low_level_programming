#include <stdio.h>

/**
* main - print sum of all multiples of 3 and 5 up to 1024
* Description: prints the sum of all multiples of 3 and 5
* up to but not including 1024
* Return: return 0
*/
int main(void)
{
	int k;
	long int i, j, fib;
	i = 0,
	j = 1;

	for (k = 1; k < 50; k++)
	{
		fib = i + j;
		i = j;
		j = fib;
		printf("%lu, ", fib);
	}
	return (0);
}

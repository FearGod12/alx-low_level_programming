#include <unistd.h>
#include <stdio.h>

/**
* description: a function that prints the lower case alphabets
* @void: returns no value
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		write(1, &i, 1);
	}
	putchar('\n');
}int main(void)
{
	print_alphabet();
	return (0);
}

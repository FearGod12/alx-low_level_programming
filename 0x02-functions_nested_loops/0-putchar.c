#include <unistd.h>

/**
* main - Prints _putchar
* @void: Empty parameter list for main.
*
* Description: Prints _putchar w/out stdio
*
* Return: 0 for success
*/
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}

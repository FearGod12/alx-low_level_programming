#include <unistd.h>

/**
* main - Prints quote to the standard error
* description: a program to use write function to print to screen
*
* Return: 1 on success
*/
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"	,60);
	return (1);
}

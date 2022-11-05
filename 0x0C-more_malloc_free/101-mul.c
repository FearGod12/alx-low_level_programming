#include "main.h"

/**
 * main - performs multiplication using arguments
 * passed from the command line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int result;
	char e[] = "Error";
	int i = 0;

	if (argc != 3)
	{
		while (e[i] != '\0')
		{
			_putchar(e[i]);
		}
		_putchar('\n');
			exit(98);
	}
	if (!(argv[2] >= "48" && argv[2] <= "57") || !(argv[3] >= "48" && argv[3] <= "57"))
	{
		while (e[i] != '\0')
		{
			_putchar(e[i]);
		}
		_putchar('\n');
			exit(98);
	}
	result = argv[2] * argv[3];

	for (i = 0; result[i] != '\0'; i++)
		_putchar(result);
	_putchar('\n');
	return (0);
}

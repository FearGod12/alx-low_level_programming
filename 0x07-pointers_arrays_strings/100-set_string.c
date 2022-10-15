#include "main.h"

/**
 * set_string - sets a pointer to a pointer
 * @s: pointer to pointer @to
 * @to: pointer to be pointed to
 * Return: retuens nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}

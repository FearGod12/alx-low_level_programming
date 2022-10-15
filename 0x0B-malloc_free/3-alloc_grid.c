#include "main.h"

/**
 * alloc_grid - dimensional array of integers.
 * @width: rows of the grid
 * @height: colunms of the grid
 * Return: returns a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **t;

	if (width < 1 || height < 1)
		return (0);
	t = (int **)malloc(height * sizeof(int *));
	if (t == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		t[i] = (int *)malloc(width * sizeof(int));
		if (t[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(t[j]);
			free(t);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			t[i][j] = 0;
	}
	return (t);
}

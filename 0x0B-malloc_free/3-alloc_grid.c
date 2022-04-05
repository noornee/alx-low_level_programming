#include <stdlib.h>

/**
 * alloc_grid - return pointer to a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to an array of int.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	ptr = malloc(sizeof(int) * width);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
		ptr[i] = malloc(sizeof(int) * height);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}

	}

	return (ptr);
}

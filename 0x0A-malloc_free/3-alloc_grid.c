#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: the width/rows of the grid/matrix
 * @height: the height/colums of the grid/matrix
 *
 * Return: the grid or return NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int r, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Dynamically created array of pointers of size height */
	array = malloc(sizeof(*array) * height);

	if (array == '\0')
	{
		return (NULL);
	}
	/* Dynamically allocate memory of size width for each row */
	for (r = 0; r < height; r++)
	{
		array[r] =  malloc(sizeof(**array) * width);
		if (array[r] == '\0')
		{
			for (c = 0; c < width; c++)
			{
				free(array[c]);
			}
			free(array);
			return (NULL);
		}
	}
	for (r = 0; r < height; r++)
	{
		for (c = 0; c < width; c++)
		{
			array[r][c] = 0;
		}
	}
	return (array);
}

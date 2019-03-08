#include "holberton.h"

/**
 * array_range - function that creates an array of integers
 * @min: the minimun soze of the array
 * @max: the maximun size of the array
 *
 * Return: the pointer to the newly created array. If min > max, return NULL.
 * If malloc fails, return NULL.
 */

int *array_range(int min, int max)
{
	int *array;
	int i;
	int num = max - min;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * num + 1);
	if (!array)
	{
		return (NULL);
	}
	for (i = 0; i <= num; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}

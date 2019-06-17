#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: the array
 * @size: the size of the array
 *
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t minimum, i, j;

	if (!array || !size)
		return;

	for (i = 0; i < size; i++)
	{
		minimum = i;

		for (j = i + 1; j < size; j++)
		{
			/* Select the smallest value */
			if (array[j] < array[minimum])
			{
				minimum = j;
			}
		}

		if (array[i] > array[minimum])
		{
			swap_int(&array[i], &array[minimum]);
			print_array(array, size);
		}

	}
}

/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer to an integer
 * @b: pointer to an integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

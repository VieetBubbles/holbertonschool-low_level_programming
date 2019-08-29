#include "search_algos.h"

/**
 * jump_search - Write a function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: the first index where value is located.
 */

int jump_search(int *array, size_t size, int value)
{
	int jump_to;
	size_t j, i = 0;

	/* Finding index to be jumped to */
	jump_to = sqrt(size);

	if (!array)
		return (-1);

	/* jump right to next index then exits when near the value */
	while (array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i = i + jump_to;
		/* Omit out the printf if value not found after jumping*/
		if (size <= i)
			break;
	}

	j = i - jump_to;
	printf("Value found between indexes [%lu] and [%lu]\n", j, i);

	/* increment through the sub-array until the value */
	while (array[j] <= value)
	{
		if (array[j] != value)
			printf("Value checked array[%lu] = [%d]\n", j, array[j]);

		/* If element is found */
		if (array[j] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", j, array[j]);
			return (j);
		}
		j++;
		/* Omit out the printf if value not found after incrementing*/
		if (j == size)
			break;
	}
	return (-1);
}

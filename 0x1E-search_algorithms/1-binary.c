#include "search_algos.h"

/**
 * binary_search -Write a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: the index where value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t right_high = size - 1;
	size_t left_low = 0;
	size_t middle_number, i;

	if (!array)
		return (-1);

	while (left_low <= right_high)
	{
		middle_number = (left_low + right_high) / 2;

		printf("Searching in array: ");

		/*List the current array before halving it */
		for (i = left_low; i <= right_high; i++)
		{
			if (i != right_high)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d\n", array[right_high]);
			}
		}

		/* Check if value is present at mid */
		if (array[middle_number] == value)
			return (middle_number);

		/* If value greater, ignore left half */
		if (array[middle_number] < value)
			left_low = middle_number + 1;

		/* If value is smaller, ignore right half */
		else
		       right_high = middle_number - 1;
	}
	/* if we reach here, then element was not present */
	return (-1);
}

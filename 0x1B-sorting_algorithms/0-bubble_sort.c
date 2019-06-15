#include "sort.h"

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

/**
 * bubble_sort - function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm.
 * @array: the array with the unsorted integers
 * @size: the size of the array
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int flag = 0;

	/* Reset the bubble to go through the array again */
	while (flag == 0)
	{
		/* Sets a flag to stop the bubble if it never hits the if */
		/* statement and if finishes sorting the entire array */
		flag = -1;

		/* Bubble goes through the array and swaps until it hits the */
		/* end of the array */
		for (i = 1; i < size; i++)
		{
			if (array[i] < array[i - 1])
			{
				/* swap the integers inside the bubble */
				swap_int(&array[i - 1], &array[i]);

				/* print the array immediately after the sort*/
				print_array(array, size);
				flag = 0;
			}
		}
	}
}

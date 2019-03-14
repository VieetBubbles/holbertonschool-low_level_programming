#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array given
 * @size: the size of the array
 * @cmp: the function pointer to the compare step
 *
 * Return: the index of the first element for which the cmp function does
 * not return 0. If no element matches, return -1 and If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (!array || !cmp)
	{
		return (-1);
	}

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}

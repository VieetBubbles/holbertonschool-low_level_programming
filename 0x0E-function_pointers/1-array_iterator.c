#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: the array that is used
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
	{
		while (size)
		{
			action(*(array));
			array++;
			size--;
		}
	}
}

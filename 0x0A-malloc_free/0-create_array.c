#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes
 * it with a specific char
 * @size: the size of the array give that is positive
 * @c: the character the array will contain
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(c) * size);

	if (ptr != '\0')
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}

	return (ptr);
}

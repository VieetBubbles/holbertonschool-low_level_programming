#include "holberton.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the size of the memory to be allocatd
 *
 * Return: a pointer to the allocated memory and if it fails exit 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}

	return (ptr);
}

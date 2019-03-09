#include "holberton.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: The pointer to the string to place in memory
 * @old_size: the old memory size
 * @new_size: the new memory size
 *
 * Return: a pointer to the string or Null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
	{
		return (malloc(new_size));
	}

	/* Arthur help me with the code */
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
	if (!p)
	{
		return (NULL);
	}
	if (old_size < new_size)
	{
		old_size = old_size;
	}
	else
	{
		old_size = new_size;
	}
	while (old_size--)
	{
		p[old_size] = ((char *)ptr)[old_size];
	}
	free(ptr);
	return (p);
}

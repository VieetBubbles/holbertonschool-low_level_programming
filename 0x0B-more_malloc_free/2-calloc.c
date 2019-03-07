#include "holberton.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: the size of the array
 * @size: the integer given from the sizeof function
 *
 * Return: the allocated memmory if successful. If nmemb or size is 0,
 * then _calloc returns NULL. If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *Cptr;
	unsigned int i, block;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	block = nmemb * size;

	ptr = malloc(block);

	if (!ptr)
	{
		return (NULL);
	}
	Cptr = ptr;
	for (i = 0; i < block; i++)
	{
		Cptr[i] = 0;
	}
	return (ptr);
}

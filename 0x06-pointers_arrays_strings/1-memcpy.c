#include "holberton.h"

/**
 * _memcpy - function that copies memory area
 * @dest: a pointer to the destination memory area
 * @src: a pointer to a char/source memory area
 * @n: the number of bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

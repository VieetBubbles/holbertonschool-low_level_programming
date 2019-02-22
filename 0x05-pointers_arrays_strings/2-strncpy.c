#include "holberton.h"

/**
 * _strncpy - function that copies a string
 * @dest: a pointer to a char/destination string
 * @src: a pointer to a char/source string
 * @n: the number of bytes to copy
 *
 * Return: A pointer to the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: a pointer to a char string/buffer
 * @b: the constant byte
 * @n: the first n bytes of the memory area pointed to by s
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(i < n)
	{
                s[i] = b;
		i++;
	}
	return(s);
}

#include "holberton.h"
int _strlen(char *s);

/**
 *
 *
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int i;
	char *start;

	start = dest;

	len = _strlen(dest);

	i = 0;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (start);
}

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to a char
 *
 * Return: the string length
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length])
	{
		length++;
	}
	return (length);
}

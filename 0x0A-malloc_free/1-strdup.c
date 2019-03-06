#include "holberton.h"
#include <stdlib.h>
int _strlen(char *str);

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: the string given
 *
 * Return: a pointer to the duplicated string. It returns NULL if
 * insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int len;

	if (str == 0)
	{
		return (NULL);
	}

	len = _strlen(str);

	ptr = malloc(len * sizeof(*str));

	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * _strlen - function that gets the lengt of a string
 * @str: the string given
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length])
	{
		length++;
	}
	return (length);
}

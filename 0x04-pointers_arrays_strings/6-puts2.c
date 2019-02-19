#include "holberton.h"
int _strlen(char *s);

/**
 * puts2 - function that prints one char out of 2 of a string,
 * followed by a new line
 * @str: pointer to a char
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int len;

	i = 0;
	len = _strlen(str);

	for (i = 0; i < len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
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

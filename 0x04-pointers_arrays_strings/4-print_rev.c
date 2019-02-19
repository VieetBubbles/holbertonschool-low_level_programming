#include "holberton.h"
int _strlen(char *s);

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 * @s: pointer to a char
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;
	int len;

	len = _strlen(s);
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
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

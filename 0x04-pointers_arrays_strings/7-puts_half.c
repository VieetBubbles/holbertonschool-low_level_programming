#include "holberton.h"
int _strlen(char *s);

/**
 * puts_half - function that prints half of a string,
 * followed by a new line
 * @str: pointer to a char
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int len;
	int i;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2 != 0)
	{
		for (i = (len + 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
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

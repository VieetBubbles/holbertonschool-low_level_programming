#include "holberton.h"

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

	for (i = len / 2; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

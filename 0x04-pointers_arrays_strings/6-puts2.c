#include "holberton.h"

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

	len = _strlen(str);

	for (i = 0; i < len - 1; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

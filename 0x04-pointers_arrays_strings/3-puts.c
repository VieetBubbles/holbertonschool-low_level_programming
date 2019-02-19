#include "holberton.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: pointer to a char
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int c;

	while (str[c])
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: a pointer to a char/string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	_putchar(*s++);

	if (!*s)
	{
		_putchar('\n');
	}
	if (*s)
	{
		_puts_recursion(s);
	}
}

#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: the string
 *
 * Return: the string length
 */

int _strlen_recursion(char *s)
{
	/* If we reach the end of the string */
	if (!*s)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

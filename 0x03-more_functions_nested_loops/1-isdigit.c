#include "holberton.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: integer
 *
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

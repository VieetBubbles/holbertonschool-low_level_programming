#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1. Or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	/* Uesed Arthur's whitebboarding from his review */
	if (!b)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		/* b101 = 0 x 2 + 1 = 1 -> 1 x 2 + 0 = 2 -> 2 x 2 + 1 = 5 */
		num = num * 2 + (*b - '0');
		b++;
	}
	return (num);
}

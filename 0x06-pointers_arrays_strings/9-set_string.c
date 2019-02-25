#include "holberton.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: a pointer to a pointer char string
 * @to: a pointer to a char string
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}

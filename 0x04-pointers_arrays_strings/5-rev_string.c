#include "holberton.h"
int _strlen(char *s);

/**
 * rev_string - function that reverses a string
 * @s: pointer to a char
 *
 * Return: nothing
 */

void rev_string(char *s)
{

	int len, i;
	char *begin_ptr, *end_ptr, temp;

	/* Get the length of the string */

	len = _strlen(s);

	/* Set the begin_ptr and end_ptr */
	/* initially to start of string */

	begin_ptr = s;
	end_ptr = s;

	/* Move the end_ptr to the last character */

	for (i = 0; i < len - 1; i++)
	{
		end_ptr++;
	}

	/* Swap the char from start and end */
	/* index using begin_ptr and end_ptr */

	for (i = 0; i < len / 2; i++)
	{

		/* swap character */
		temp = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = temp;

		/* update pointers positions */
		begin_ptr++;
		end_ptr--;
	}
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

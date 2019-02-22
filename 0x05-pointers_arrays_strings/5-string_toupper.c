#include "holberton.h"
int _strlen(char *s);

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 * @str: a pointer to a char string
 *
 * Return: the new uppercase string
 */

char *string_toupper(char *str)
{
	int i;
	int len;

	len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
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

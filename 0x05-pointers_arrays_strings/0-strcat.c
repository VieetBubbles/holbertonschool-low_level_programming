#include "holberton.h"
int _strlen(char *s);

/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to a char
 * @src: pointer to a char
 * description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and
 * then adds a terminating null byte.
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int i;
	char *start;

	start = dest;

	len = _strlen(dest);

	i = 0;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (start);
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

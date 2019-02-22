#include "holberton.h"
int _strlen(char *s);

/**
 * _strncat - function that concatenates two strings
 * @dest: a pointer to a char
 * @src: another pointer to a char
 * @n: n bytes to copy from source
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	char *start;
	int i = 0;

	start = dest;

	len = _strlen(dest);

	while (src[i] != '\0' && i < n)
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

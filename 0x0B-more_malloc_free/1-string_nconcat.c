#include "holberton.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the string that is to be concatenated
 * @n: the size of the 2nd string to be allocated to in memeory
 *
 * Return: a concatnated string or if the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, i;
	unsigned int len2, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
	{
		ptr = malloc(sizeof(char) * (len1 + len2) + 1);
	}
	else
	{
		ptr = malloc(sizeof(char) * (len1 + n) + 1);
	}
	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * _strlen - function that gets the lengt of a string
 * @str: the string given
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length])
	{
		length++;
	}
	return (length);
}

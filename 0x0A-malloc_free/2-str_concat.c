#include "holberton.h"
#include <stdlib.h>
int _strlen(char *str);

/**
 * str_concat - function that concatenates two strings
 * @s1: the 1st string
 * @s2: the 2nd string to be added to the 1st
 *
 * Return: a concatenated string or return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1, i;
	int len2, j;
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

	ptr = malloc(sizeof(char) * (len1 + len2) + 1);

	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
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

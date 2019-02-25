#include "holberton.h"
#include "stdio.h"

/**
 * _strstr - function that locates a substring
 * @haystack: a pointer to a char string that contains a sub-string
 * @needle: a pointer to a char/the first occurrence of the substring needle
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && _strcmp(haystack, needle))
		{
			return (haystack);
		}

		if (*needle == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}

/**
 * _strcmp - function that compares two strings
 * @s1: the first string to be compared
 * @s2: the second string to compare
 *
 * Return: true if s1 and s2 are the same
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (1);
}

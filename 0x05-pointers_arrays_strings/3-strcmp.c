#include "holberton.h"

/**
 * _strcmp - function that compares two strings
 * @s1: the first string to be compared
 * @s2: the second string to compare
 *
 * Return: less than 0 if s1 is less than s2. Greater than 0 if s1 is greater
 * than s2. And 0 if they are equal.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

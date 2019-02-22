#include "holberton.h"

/**
 * leet - unction that encodes a string into 1337
 * @s: pointer to a char
 *
 * Return: a pointer to a string
 */

char *leet(char *s)
{
	int i;
	int j;
	char *letters = "aAeEoOtTlL";
	char *number = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				s[i] = number[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}

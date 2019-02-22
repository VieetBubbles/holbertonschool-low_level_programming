#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: a pointer to a char string
 *
 * Return: a string
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
			       '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] <= 'a' && str[i] >= 'z')
			{
				str[i] -= 32;
			}
		}
		for (j = 0; j < 13; j++)
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 'a' && sep[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);
}

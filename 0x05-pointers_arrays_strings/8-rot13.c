#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: a pointer to a string
 *
 * Return: a string
 */

char *rot13(char *s)
{
	int i;
	int j;
	char *t1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *t2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; t1[j] != '\0'; j++)
		{
			if (s[i] == t1[j])
			{
				s[i] = t2[j];
				break;
			}

		}
	}
	return (s);
}

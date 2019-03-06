#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: the number of arguments taken
 * @av: the argument that is passed into the function
 *
 * Return: a string or null if failure
 */

char *argstostr(int ac, char **av)
{
	int i, j, len;
	int k = 0;
	char *ptr;

	if (!ac || !av)
	{
		return (NULL);
	}

	/* Gets the length of the string argument and adds the \n */
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]) + 1;
	}

	/* Dynamically allocate memory for the string plus the null byte*/
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
	{
		return (NULL);
	}

	/* Goes through each argument and check for the */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			ptr[k] = av[i][j];
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
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

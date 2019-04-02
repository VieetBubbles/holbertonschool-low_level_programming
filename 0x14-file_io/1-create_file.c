#include "holberton.h"

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

/**
 * create_file - function that creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int len;

	if (!filename)
		return (-1);

	/* create/open and set the file descriptor & permissions */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	/* check if the file descriptor fails */
	if (fd < 0)
	{
		return (-1);
	}

	/* if the string is not empty */
	if (text_content)
	{
		/* get the string length */
		len = _strlen(text_content);

		/* store the printed string inside the variable w */
		w = write(fd, text_content, len);

		/* checks if w fails */
		if (w < 0)
		{
			return (-1);
		}
	}

	/* close the opened file */
	close(fd);
	return (1);
}

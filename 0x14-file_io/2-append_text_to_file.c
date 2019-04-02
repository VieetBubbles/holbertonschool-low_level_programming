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
 * append_text_to_file - function that appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (!filename)
	{
		return (-1);
	}

	/* create/open and set the file descriptor with the append permission */
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
	{
		return (-1);
	}

	/* if the string is not empty */
	if (text_content)
	{
		/* get the string length */
		len = _strlen(text_content);

		/* store the printed string inside the variable w/file */
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

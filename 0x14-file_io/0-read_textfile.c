#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output
 * @filename: is the text file that is to be read
 * @letters: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	if (!filename)
		return (0);

	/* Set the file descriptor */
	fd = open(filename, O_RDONLY);

	/* check if file descriptor is -1 */
	if (fd < 0)
		return (0);

	/* allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	/* store the read-only amount of characters */
	r = read(fd, buffer, letters);
	close(fd);

	/* check if r is -1 */
	if (r < 0)
	{
		return (0);
	}

	/* store the printed charcters inside variable w */
	w = write(STDOUT_FILENO, buffer, r);

	/* check if w is -1 */
	if (w < 0)
		return (0);
	return (w);
}

#include "holberton.h"

/**
 * main - a function that copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: a pointer to the argument pass to the function
 *
 * Return: always 0 if successful
 */

int main(int argc, char **argv)
{
	int f_from, f_to, r, closef, closet;
	char buffer[1024];

	/* Tu guided me through the problem */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	f_from = open(argv[1], O_RDONLY);
	if (f_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((r = read(f_from, buffer, 1024)) > 0)
	{
		if (f_to < 0 || (write(f_to, buffer, r) != r))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	closef = close(f_from);
	if (closef < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f_from), exit(100);
	}
	closet = close(f_to);
	if (closet < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f_to), exit(100);
	}
	return (0);
}

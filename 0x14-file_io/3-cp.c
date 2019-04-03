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
	int r, ft, ff, cf, ct;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ff = open(argv[1], O_RDONLY);
	if (ff < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((r = read(ff, buffer, 1024)) > 0)
	{
		if (ft < 0 || (write(ft, buffer, r) != r))
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	cf = close(ff);
	ct = close(ft);
	if (cf < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", ff);
		exit(100);
	}
	if (ct < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", ft);
		exit(100);
	}
	return (0);
}

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
	int r, file_to, file_from, closef, closet;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	r = read(file_from, buffer, 1024);
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (r > 0)
	{
		if (file_to < 0 || write(file_to, buffer, r) != r)
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	closef = close(file_from);
	closet = close(file_to);
	if (closef < 0 || closet < 0)
	{
		if (closef < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);

		else if (closet < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

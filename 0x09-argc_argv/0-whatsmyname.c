#include "holberton.h"
#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: the argument count
 * @argv: the argument passed into the string
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

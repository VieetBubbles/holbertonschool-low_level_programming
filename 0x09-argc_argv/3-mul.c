#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: the number of arguments
 * @argv: the arguments passed into the program
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc > 2)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}

	else
	{
		printf("Error\n");
	}

	return (0);
}

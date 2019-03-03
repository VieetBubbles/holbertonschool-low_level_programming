#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: the number of argument taken
 * @argv: the number integer arrays needed to be added
 *
 * Return: 0 upon success and 1 if failure
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)

		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

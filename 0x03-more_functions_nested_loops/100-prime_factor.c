#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	long int i;
	long int j = 612852475143;

	for (i = 2; i < j; i++)
	{
		j = j / i;
	}
	printf("%li\n", j);
	return (0);
}

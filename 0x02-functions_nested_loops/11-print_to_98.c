#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: integer
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	int i;
	int j;

	if (n < 99)
	{
		i = n;
		while (i < 99)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			i++;
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else if (n > 97)
	{
		j = n;
		while (j > 97)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(", ");
			}
			j--;
		}
	}
	printf("\n");
}

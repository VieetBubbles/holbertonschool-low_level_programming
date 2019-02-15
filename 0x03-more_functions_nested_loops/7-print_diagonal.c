#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: integer
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}

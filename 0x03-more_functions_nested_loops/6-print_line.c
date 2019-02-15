#include "holberton.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: integer
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;
	int j;

	for (i = n; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (n < 0)
			{
				_putchar('\n');
			}
			_putchar('_');
		}
		_putchar('\n');
	}

}

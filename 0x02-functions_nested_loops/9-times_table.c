#include "holberton.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: nothing
 */

void times_table(void)
{
	int i;
	int j;
	int product;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			product = i * j;
			if (j == 0)
			{
				_putchar(product + '0');
			}
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}

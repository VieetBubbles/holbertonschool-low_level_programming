#include "holberton.h"

/**
 * print_times_table - function that prints times table
 * @n: integer
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
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
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product >= 10 && product <= 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			if (product >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 100 + '0');
				_putchar(product / 10 % 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

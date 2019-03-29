#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number given to be transformed into binary form
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8 - 1; /*63*/
	int count = 0;

	/* Used Arthur's review as the basis */
	while (bit >= 0)
	{
		/* Identify if this bit (1) is on or off */
		/* the 1 means - looking at the right most digit */
		/* 1 is on, and 0 is off */
		if (n >> bit & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
		/* decrement to get to 62, 61, 60,... 1, 0 */
		bit--;
	}
	if (!count)
	{
		_putchar('0');
	}
}

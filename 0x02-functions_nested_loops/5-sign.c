#include "holberton.h"

/**
 * print_sign - function that prints the sign of a number.
 * @n: integer
 *
 * Return: 0 if the sign is 0. 1 if the sign is +. Or
 * -1 if the sign is -.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

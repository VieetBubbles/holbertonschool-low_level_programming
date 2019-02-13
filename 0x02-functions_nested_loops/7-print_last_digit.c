#include "holberton.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @a: integer
 *
 * Return: the value of the last digit
 */

int print_last_digit(int a)
{
	int i;

	i = a % 10;

	if (a < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}

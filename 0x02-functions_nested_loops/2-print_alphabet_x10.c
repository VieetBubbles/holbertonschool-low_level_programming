#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int counter;
	char i;

	for (counter = 0; counter <= 9; counter++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0
 */

int main(void)
{
	char i;
	char i2;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (i2 = 'A'; i2 <= 'Z'; i2++)
	{
		putchar(i2);
	}

	putchar('\n');

	return (0);
}

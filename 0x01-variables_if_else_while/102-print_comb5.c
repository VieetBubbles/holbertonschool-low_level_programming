#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0
 */

int main(void)
{
	int first;
	int second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			putchar(first / 10 + '0');
			putchar(first % 10 + '0');
			putchar(' ');
			putchar(second / 10 + '0');
			putchar(second % 10 + '0');
			if (first == 98 && second == 99)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			second++;
		}
		first++;
	}
	return (0);
}

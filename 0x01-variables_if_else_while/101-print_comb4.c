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
	int third;

	for (first = 0; first < 10; first++)
	{
		for (second = first + 1; second < 10; second++)
		{
			for (third = second + 1; third < 10; third++)
			{
				putchar(first + '0');
				putchar(second + '0');
				putchar(third + '0');

				if (first != 7 || second != 8 || third != 9)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar('\n');
				}
			}
		}
	}

		return (0);
}

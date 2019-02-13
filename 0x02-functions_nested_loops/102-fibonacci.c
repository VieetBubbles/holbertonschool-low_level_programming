#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int number;
	int a;
	int b;
	int c;

	for (number = 3; number <= 50; number++)
	{
		c = a + b;
		a = b;
		b = c;

		if (number < 50)
		{
			printf("%lu, ", c);
		}
		else
		{
			printf("%lu\n", c);
		}
	}
	return (0);
}

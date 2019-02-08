#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	int second_Digit;

	for (i = 0; i < 10; i++)
	{
		for (second_Digit = 0; second_Digit < 10; second_Digit++)
		{
			putchar(i + '0');
			putchar(second_Digit + '0');

			if (second_Digit == 9 && i == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}

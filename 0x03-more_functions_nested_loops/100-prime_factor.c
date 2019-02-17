#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	long int i;
	long int j = 612852475143;

	i = 2;
	while(i < j)
	{
		while(j % i == 0)
		{
			j = j / i;
		}
		i++;
	}
	printf("%li\n", j);
	return (0);
}

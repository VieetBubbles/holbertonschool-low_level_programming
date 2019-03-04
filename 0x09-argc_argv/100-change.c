#include <stdio.h>
#include <stdlib.h>
int number_ofCents(int cents);

/**
 * main - the entry point
 * @argc: the number of arguments
 * @argv: the arguments passed into the program
 *
 * Return: error if there are more or less than 2 arguments
 * or the coin count the arguments is 2
 */

int main(int argc, char **argv)
{
	int money;

	/* Had help from Juno for the helper function */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", number_ofCents(money));
	return (0);
}

/**
 * number_ofCents - program that prints the minimum number of coins to
 * make change for an amount of money
 * @cents: the total amount of cents given
 *
 * Return: the number of coins the cent breaks down to
 */

int number_ofCents(int cents)
{
	int coins;

	coins = 0;
	while (cents != 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}

		else if (cents >= 5)
		{
			cents -= 5;
		}

		else if (cents >= 2)
		{
			cents -= 2;
		}

		else if (cents >= 1)
		{
			cents -= 1;
		}
		coins++;
	}

	return (coins);
}

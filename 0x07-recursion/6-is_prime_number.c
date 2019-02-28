#include "holberton.h"
int check_ifPrime(int n, int i);

/**
 * is_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: the number to check
 *
 * Return: 1 if the integer is a prime number, or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (check_ifPrime(n, n - 1));
}

/**
 * check_ifPrime - function that checks if the value inputed is a prime number
 * @n: the value inputed
 * @i: the number to iterate through to check if orime or not
 *
 * Return: 0 if not and 1 if a prime number
 */

int check_ifPrime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (check_ifPrime(n, i - 1));
	}
}
